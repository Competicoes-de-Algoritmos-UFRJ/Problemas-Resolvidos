#include <bits/stdc++.h>
 
using namespace std;
 
int start = -1, finish = -1;
vector<vector<int>> adjacencies;
vector<int> vis, last;
 
void dfs(int u, int prev) {
    vis[u] = true;
 
    for(int v : adjacencies[u]) {
        if(!vis[v]) {
            last[v] = u;
            dfs(v, u);
        }
        else if(start == -1 && v != prev) {
            start = v;
            finish = u;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);
 
    int n, m;
    cin >> n >> m;
 
    adjacencies.resize(n+1);
    vis.resize(n+1);
    last.resize(n+1);
 
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
 
        adjacencies[u].push_back(v);
        adjacencies[v].push_back(u);
    }
 
    for(int u = 1; u <= n; u++) {
        if(!vis[u]) {
            dfs(u, -1);
        }
    }
 
    if(start == -1) {
        cout << "IMPOSSIBLE\n";
    }else {
        vector<int> cycle;
 
        int curr = finish;
 
        cycle.push_back(finish);
        while(curr != start) {
            curr = last[curr];
            cycle.push_back(curr);
        }
        cycle.push_back(finish);
 
        cout << cycle.size() << '\n';
        for(int u : cycle) cout << u << ' ';
        cout << '\n';
    }
}