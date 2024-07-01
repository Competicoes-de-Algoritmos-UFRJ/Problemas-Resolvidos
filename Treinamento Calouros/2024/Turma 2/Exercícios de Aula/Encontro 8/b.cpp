//https://neps.academy/br/exercise/825 - Fissura Perigosa

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 5e2+5;

int n, f, memo[mxn][mxn];
char ma[mxn][mxn];

int gx[4] = {0, 0, 1, -1};
int gy[4] = {-1, 1, 0, 0};

void dfs(int x, int y){
    memo[x][y]=1;

    if(ma[x][y]-'0'>f) return;

    ma[x][y]='*';

    for(int i=0; i<4; i++){
        int nx = x+gx[i];
        int ny = y+gy[i];

        if(nx>=1 && ny>=1 && nx<=n && ny<=n && !memo[nx][ny]){
            dfs(nx, ny);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    cin >> n >> f; 

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> ma[i][j];
        }
    }

    dfs(1, 1);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << ma[i][j];
        }
        cout << endl;
    }

    return 0;
}