//https://neps.academy/br/exercise/57 - Toca do Saci

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 1e3+5;

int n, m, vis[mxn][mxn], fimx, fimy;
int ma[mxn][mxn];

int bfs(int x, int y){
    queue<pair<int, pair<int, int> > > fila;

    fila.push({0, {x, y}});

    while(!fila.empty()){
        int x = fila.front().second.first, y = fila.front().second.second;
        int d = fila.front().first;
        fila.pop();

        if(x==fimx && y==fimy){
            return d;
        }

        if(x<1 || x>n || y<1 || y>m || ma[x][y]==0 || vis[x][y]==1) continue;

        vis[x][y]=1;

        fila.push({d+1, {x+1, y}});
        fila.push({d+1, {x-1, y}});
        fila.push({d+1, {x, y-1}});
        fila.push({d+1, {x, y+1}});
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    int inix, iniy;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ma[i][j];

            if(ma[i][j]==2) inix = i, iniy = j;
            if(ma[i][j]==3) fimx = i, fimy = j;
        }
    }
    
    cout << bfs(inix, iniy)+1 << endl;

    return 0;
}