#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adjacencies(n+1);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adjacencies[u].push_back(v);
        adjacencies[v].push_back(u);
    }

    for(int u = 1; u <= n; u++) {
        cout << adjacencies[u].size() << '\n';
    }
}