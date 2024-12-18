#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> adjacencies;
vector<int> vis;

void dfs(int u) {
    vis[u] = true;

    for(int v : adjacencies[u]) {
        if(!vis[v]) {
            dfs(v);
        }
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;
    
    adjacencies.resize(n+1);
    vis.resize(n+1);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjacencies[u].push_back(v);
        adjacencies[v].push_back(u);
    }

    vector<int> comp;

    for(int u = 1; u <= n; u++) {
        if(!vis[u]) {
            comp.push_back(u);
            dfs(u);
        }
    }

    cout << comp.size()-1 << '\n';

    for(int i = 1; i < comp.size(); i++) {
        cout << comp[i-1] << ' ' << comp[i] << '\n';
    }
}