//https://neps.academy/br/exercise/122 - Ladrilhos

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 2e2+5;

int n, m, vis[mxn][mxn], cont;
int ma[mxn][mxn];

void dfs(int x, int y, int cor){
    if(x<1 || x>n || y<1 || y>m || ma[x][y]!=cor || vis[x][y]==1) return;

    vis[x][y]=1;
    cont++;

    dfs(x+1, y, cor);
    dfs(x-1, y, cor);
    dfs(x, y+1, cor);
    dfs(x, y-1, cor);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ma[i][j];
        }
    }
    int resp = 50000;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(!vis[i][j]){
                cont = 0;
                dfs(i, j, ma[i][j]);
                resp = min(resp, cont);
            }
        }
    }
    cout << resp << endl;
    return 0;
}