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

    queue<int> q;
    vector<int> vis(n+1), last(n+1, -1);

    q.push(1);
    vis[1] = true;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v : adjacencies[u]) {
            if(!vis[v]) {
                q.push(v);
                vis[v] = true;
                last[v] = u;
            }
        }
    }

    if(last[n] == -1) {
        cout << "IMPOSSIBLE\n";
    }else {
        int curr = n;
        vector<int> path;

        while(curr != -1) {
            path.push_back(curr);
            curr = last[curr];
        }

        reverse(path.begin(), path.end());

        cout << path.size() << '\n';
        for(int u : path) cout << u << ' ';
        cout << '\n';
    }
}