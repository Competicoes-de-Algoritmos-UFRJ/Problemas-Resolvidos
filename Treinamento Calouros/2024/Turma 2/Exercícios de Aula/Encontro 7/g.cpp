//https://neps.academy/br/exercise/643 - Pedágio (OBI 2002)

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 50+5;

int c, e, l, p, vis[mxn];
vector<int> vec[mxn];

void bfs(int x){
    queue<pair<int, int> > fila;
    fila.push({0, x});

    while(!fila.empty()){
        int d = fila.front().first, x = fila.front().second;
        fila.pop();

        if(d>p || vis[x]) continue;
        vis[x]=1;

        for(int i:vec[x]){
            fila.push({d+1, i});
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int cont = 0;
    while(cin >> c >> e >> l >> p && c!=0){
        for(int i=1; i<=c; i++){
            vis[i]=0;
            vec[i].clear();
        }
        for(int i=0; i<e; i++){
            int a, b;
            cin >> a >> b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        bfs(l);
        cout << "Teste " << ++cont << endl;
        for(int i=1; i<=c; i++){
            if(vis[i]==1 && i!=l){
                cout << i << ' ';
            }
        }
        cout << endl << endl;
    }

    return 0;
}