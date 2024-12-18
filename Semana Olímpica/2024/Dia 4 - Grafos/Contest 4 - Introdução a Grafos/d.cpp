#include <bits/stdc++.h>

using namespace std;

int n, m;

bool inbounds(int i, int j) {
    return (0 <= i && i < n) && (0 <= j && j < m);
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    vector<string> grid(n);

    for(string& line : grid) {
        cin >> line;
    }

    pair<int,int> a, b;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(grid[i][j] == 'A') a = {i,j};
            if(grid[i][j] == 'B') b = {i,j};
        }
    }
    
    queue<pair<int,int>> q;
    vector<vector<int>> vis(n, vector<int>(m));
    vector<string> last(n, string(m, '-'));

    q.push(a);
    vis[a.first][a.second] = true;

    while(!q.empty()) {
        auto [i,j] = q.front();
        q.pop();
    
        if(inbounds(i-1,j) && !vis[i-1][j] && grid[i-1][j] != '#') {
            q.emplace(i-1,j);
            vis[i-1][j] = true;
            last[i-1][j] = 'U';
        }
        if(inbounds(i,j+1) && !vis[i][j+1] && grid[i][j+1] != '#') {
            q.emplace(i,j+1);
            vis[i][j+1] = true;
            last[i][j+1] = 'R';
        }
        if(inbounds(i+1,j) && !vis[i+1][j] && grid[i+1][j] != '#') {
            q.emplace(i+1,j);
            vis[i+1][j] = true;
            last[i+1][j] = 'D';
        }
        if(inbounds(i,j-1) && !vis[i][j-1] && grid[i][j-1] != '#') {
            q.emplace(i,j-1);
            vis[i][j-1] = true;
            last[i][j-1] = 'L';
        }
    }

    if(!vis[b.first][b.second]) {
        cout << "NO\n";
    }else {
        string path;

        auto [i,j] = b;

        while(last[i][j] != '-') {
            path.push_back(last[i][j]);
            if(last[i][j] == 'U') i += 1;
            else if(last[i][j] == 'R') j -= 1;
            else if(last[i][j] == 'D') i -= 1;
            else if(last[i][j] == 'L') j += 1;
        }

        reverse(path.begin(), path.end());

        cout << "YES\n";
        cout << path.size() << '\n';
        cout << path << '\n';
    }
}