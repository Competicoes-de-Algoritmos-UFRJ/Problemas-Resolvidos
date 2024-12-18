#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<string> grid;
vector<vector<int>> vis;
vector<int> di = {-1,0,1,0}, dj = {0,1,0,-1};

bool inbounds(int i, int j) {
    return (0 <= i && i < n) && (0 <= j && j < m);
}

void dfs(int i, int j) {
    vis[i][j] = true;

    for(int k = 0; k < 4; k++) {
        int ni = i+di[k];
        int nj = j+dj[k];
        if(inbounds(ni,nj) && !vis[ni][nj] && grid[ni][nj] != '#') {
            dfs(ni,nj);
        }
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    grid.resize(n);
    vis.resize(n, vector<int>(m));

    for(string& line : grid) {
        cin >> line;
    }

    int ans = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == '.' && !vis[i][j]) {
                ans++;
                dfs(i,j);
            }
        }
    }

    cout << ans << '\n';
}