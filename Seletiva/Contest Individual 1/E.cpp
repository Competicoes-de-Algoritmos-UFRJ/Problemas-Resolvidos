#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

int n, resp;
vector<int> vis, prox, pai;

void dfs(int x){
    vis[x]=1;

    if(vis[prox[x]]==0){
        
        pai[prox[x]]=x;
        dfs(prox[x]);

    }else if(resp==0){
        vector<int> cycle;

        int v = x;

        while(v!=prox[x]){
            
            cycle.push_back(v);
            
            v = pai[v];
        }

        cycle.push_back(v);

        reverse(cycle.begin(), cycle.end());

        cout << (int)cycle.size() << endl;

        for(int j:cycle){
            cout << j << " ";
        }
        cout << endl;
        resp=1;
    }
}

int main(){
    fastio;
    cin >> n;
    
    pai.resize(n+1);
    vis.resize(n+1);
    prox.resize(n+1);

    for(int i=1; i<=n; i++){
        cin >> prox[i];
    }

    for(int i=1; i<=n; i++){
        if(!vis[i] && resp==0){
            dfs(i);
        }
    }
    return 0;
}
