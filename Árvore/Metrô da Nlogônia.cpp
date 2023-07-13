#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

const int mxn = 1e5+5;

int n[2], dist[mxn], excen[mxn];
vector<int> adj[mxn][2];

void dfs(int x, int pai, int metro){
    for(int i:adj[x][metro]){
        if(i==pai) continue;

        dist[i]=dist[x]+1;

        dfs(i, x, metro);
    }
}

void calc_dist(int x, int metro){
    for(int i=1; i<=n[metro]; i++){
        dist[i]=0;
    }

    dfs(x, 0, metro);
}

int tree(int metro){
    int maior=0, menor=INF, ponta_1=0, ponta_2=0;
    int diam, centro;

    for(int i=1; i<=n[metro]; i++){
        dist[i]=0;
        excen[i]=0;
    }

    calc_dist(1, metro); //calculando distância para o vértice 1

    //o vértice mais distante do vértice 1, será a primeira ponta do diâmetro
    for(int i=1; i<=n[metro]; i++){
        if(dist[i]>maior){
            maior = dist[i];

            ponta_1 = i;
        }
    }

    calc_dist(ponta_1, metro); //calculando distância para a primeira ponta

    //o vértice mais distante da primeira ponta, será a segunda ponta do diâmetro, e distância entre as duas será igual ao diâmetro
    
    //a excentricidade do vértice será igual ao máximo entre as distâncias dele com as duas pontas 
    
    maior=0;
    for(int i=1; i<=n[metro]; i++){
        //nesse momento estamos igualando a excentricidade com a distância da primeira ponta, e depois iremos comparar com a segunda
        excen[i]=dist[i];

        if(dist[i]>maior){
            maior=dist[i];

            ponta_2=i;
        }
    }
    diam = maior;

    calc_dist(ponta_2, metro); //calculando distância para a segunda ponta

    //como havia dito, a excentricidade será o máximo entre as distâncias da primeira e segunda ponta
    for(int i=1; i<=n[metro]; i++){
        excen[i]=max(excen[i], dist[i]);
    }

    //o centro será o vértice com a menor excentricidade
    for(int i=1; i<=n[metro]; i++){
        if(excen[i]<=menor){
            menor=excen[i];
            centro=i;
        }
    }
    return centro;
}

int main(){
    
    cin >> n[0] >> n[1];

    for(int i=1; i<n[0]; i++){
        int a, b;

        cin >> a >> b;

        adj[a][0].push_back(b);
        adj[b][0].push_back(a);

    }

    for(int i=1; i<n[1]; i++){
        int a, b;

        cin >> a >> b;

        adj[a][1].push_back(b);
        adj[b][1].push_back(a);

    }
    cout << tree(0) << " " << tree(1) << endl;
    return 0;
}
