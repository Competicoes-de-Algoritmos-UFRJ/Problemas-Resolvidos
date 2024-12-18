#include <bits/stdc++.h>

using namespace std;

int n, m;
bool ok = true;
vector<vector<int>> adjacencies;
vector<int> color;

void dfs(int u, int c) {
    color[u] = c;

    for(int v : adjacencies[u]) {
        if(!color[v]) {
            dfs(v, (c == 1) ? 2 : 1);
        }else if(color[u] == color[v]) {
            ok = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    adjacencies.resize(n+1);
    color.resize(n+1);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        
        adjacencies[u].push_back(v);
        adjacencies[v].push_back(u);
    }

    for(int u = 1; u <= n; u++) {
        if(!color[u]) {
            dfs(u, 1);
        }
    }

    if(ok) {
        for(int u = 1; u <= n; u++) cout << color[u] << ' ';
        cout << '\n';
    }else {
        cout << "IMPOSSIBLE\n";
    }
}