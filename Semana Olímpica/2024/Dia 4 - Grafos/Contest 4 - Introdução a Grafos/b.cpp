#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    vector<vector<int>> adjacencies(n+1);

    for(int i = 0; i < n-1; i++) {
        int u, v;
        cin >> u >> v;

        adjacencies[u].push_back(v);
        adjacencies[v].push_back(u);
    }

    int count1 = 0, count2 = 0;
    for(int u = 1; u <= n; u++) {
        if(adjacencies[u].size() == 1) count1++;
        if(adjacencies[u].size() == n-1) count2++;
    }

    if(count1 == n-1 && count2 == 1) cout << "Yes\n";
    else cout << "No\n";
}