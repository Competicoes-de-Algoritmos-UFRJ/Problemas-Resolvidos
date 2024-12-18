#include <bits/stdc++.h>

using namespace std;

int n;
vector<vector<int>> adjacencies;
vector<int> vis, ans;

void dfs(int u) {
    vis[u] = true;

    for(int v : adjacencies[u]) {
        if(!vis[v]) {
            dfs(v);
            ans[u] += ans[v] + 1;
        }
    }
}

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    adjacencies.resize(n+1);
    vis.resize(n+1);
    ans.resize(n+1);

    for(int u = 2; u <= n; u++) {
        int v;
        cin >> v;
        adjacencies[u].push_back(v);
        adjacencies[v].push_back(u);
    }

    dfs(1);

    for(int u = 1; u <= n; u++) {
        cout << ans[u] << ' ';
    }
    cout << '\n';
}