#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<string> grid;
vector<vector<int>> vis;

bool inbounds(int i, int j) {
    return (0 <= i && i < n) && (0 <= j && j < m);
}

void dfs(int i, int j) {
    vis[i][j] = true;

    if(inbounds(i-1,j) && !vis[i-1][j] && grid[i-1][j] != '#') dfs(i-1,j);
    if(inbounds(i,j+1) && !vis[i][j+1] && grid[i][j+1] != '#') dfs(i,j+1);
    if(inbounds(i+1,j) && !vis[i+1][j] && grid[i+1][j] != '#') dfs(i+1,j);
    if(inbounds(i,j-1) && !vis[i][j-1] && grid[i][j-1] != '#') dfs(i,j-1);
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