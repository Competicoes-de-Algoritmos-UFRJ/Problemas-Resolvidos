#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false), cin.tie(nullptr);

    vector<int> count(5);

    for(int i = 0; i < 3; i++) {
        int u, v;
        cin >> u >> v;
        count[u]++;
        count[v]++;
    }

    if(*max_element(count.begin()+1, count.end()) != 3) cout << "YES\n";
    else cout << "NO\n";
}