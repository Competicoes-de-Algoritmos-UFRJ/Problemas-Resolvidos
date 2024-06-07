//https://neps.academy/br/exercise/567 - Manchas de Pele

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int n, m, ma[1005][1005], vis[1005][1005];

void dfs(int x, int y){
    if(x<1 || x>n || y<1 || y>m || ma[x][y]==0 || vis[x][y]==1) return;

    vis[x][y]=1;

    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);

}

void bfs(int x, int y){
    queue<pair<int, int> > fila;
    fila.push({x, y});

    while(!fila.empty()){
        int x = fila.front().first, y = fila.front().second;
        fila.pop();

        if(x<1 || x>n || y<1 || y>m || ma[x][y]==0 || vis[x][y]==1) continue;

        vis[x][y]=1;

        fila.push({x+1, y});
        fila.push({x-1, y});
        fila.push({x, y+1});
        fila.push({x, y-1});
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ma[i][j];
        }
    }
    int resp = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(!vis[i][j] && ma[i][j]==1){
                dfs(i, j); // ou bfs(i, j)
                resp++;
            }
        }
    }
    cout << resp << endl;
    return 0;
}