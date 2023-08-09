#include "bits/stdc++.h"

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)

signed main(){
    fastio;

    int n,m; cin >> n >> m;

    vector<vector<int>> graph(n);

    while(m--){
        int a,b; cin >> a >> b; a--; b--;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> dist(n,-1), black(n,1);

    int k; cin >> k;

    while(k--){
        int pi,d; cin >> pi >> d; pi--;
        dist[pi] = d;

        if(d == 0) continue;

        vector<int> vis(n,0);
        queue<int> qw;
        qw.push(pi); vis[pi] = 1;

        while(!qw.empty()){
            int cc = qw.front(); qw.pop();
            black[cc] = 0;
            for(int j: graph[cc]){
                if(vis[j] || vis[cc] >= d) continue;
                vis[j] = vis[cc]+1;
                qw.push(j);
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(dist[i] == -1) continue;
        int d = dist[i];

        if(d == 0) {
            if(black[i] == 0){
                cout << "No\n";
                return 0;
            }
            continue;
        }
        
        vector<int> vis(n,0);
        queue<int> qw;
        qw.push(i); vis[i] = 1;

        bool did = false;

        while(!qw.empty()){
            int cc = qw.front(); qw.pop();
            for(int j: graph[cc]){
                if(vis[j]) continue;
                if(vis[cc] == d){
                    if(black[j]) did = true;
                    continue;
                }
                vis[j] = vis[cc]+1;
                qw.push(j);
            }
        }

        if(!did) {cout << "No\n"; return 0;}
    }

    cout << "Yes\n";

    for(int i: black) cout << i;
    cout << '\n';


    return 0;
}
