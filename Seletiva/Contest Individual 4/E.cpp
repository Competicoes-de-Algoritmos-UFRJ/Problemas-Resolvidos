#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
const int mxn = 3e5+5;

int vis[mxn], dist[mxn];
vector<int> adj[mxn];

void bfs(int x){
    memset(vis, 0, sizeof(vis));
    memset(dist, 0, sizeof(dist));

    queue<int> fila;

    fila.push(x);
    vis[x]=1;

    while(!fila.empty()){
        int v = fila.front();
        fila.pop();

        for(int i:adj[v]){
            if(!vis[i]){
                vis[i]=1;

                dist[i] = dist[v]+1;

                fila.push(i);
            }
        }
    }
}

int main(){
    fastio;
    int n1, n2, m;

    cin >> n1 >> n2 >> m;

    for(int i=0; i<m; i++){
        int a, b;

        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);

    int resp=0, maior=-1;

    for(int i=1; i<=n1; i++){
        maior=max(maior, dist[i]);
    }
    resp+=maior;

    maior=-1;

    bfs(n1+n2);

    for(int i=n1+1; i<=n1+n2; i++){
        maior=max(maior, dist[i]);
    }
    resp+=maior;

    cout << resp+1 << endl;
    return 0;
}
