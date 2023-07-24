#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

int n, m, resp, vis[205][205][5], memo[205][205];

int gx[]={0, 0, 1, -1};
int gy[]={1, -1, 0, 0};

char ma[205][205];

void dfs(int x, int y, int movi){
    memo[x][y]=1;

    if(vis[x][y][movi+1]) return;

    vis[x][y][movi+1]=1;

    if(movi==-1){
        for(int i=0; i<4; i++){
            int novo_x = x + gx[i];

            int novo_y = y + gy[i];

            if(ma[novo_x][novo_y]=='.'){
                dfs(novo_x, novo_y, i);
            }
        }
    }else{
        int novo_x = x + gx[movi];

        int novo_y = y + gy[movi];
            
        if(ma[novo_x][novo_y]=='.'){
            dfs(novo_x, novo_y, movi);

        }else{
            dfs(x, y, -1);
        }
    }
}

int main(){
    fastio;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ma[i][j];
        }
    }

    dfs(2, 2, -1);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(memo[i][j]>0) resp++;
        }
    }

    cout << resp << endl;

    return 0;
}
