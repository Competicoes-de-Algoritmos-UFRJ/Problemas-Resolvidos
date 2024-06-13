//https://neps.academy/br/exercise/512 - Famílias de Troia

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 5e4+5;

int n, m, vis[mxn];
vector<int> vec[mxn];

void dfs(int x){
    vis[x]=1;

    for(int i:vec[x]){
        if(!vis[i]){
            dfs(i);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;

        vec[a].push_back(b);
        vec[b].push_back(a);
    }
    int resp = 0;
    for(int i=1; i<=n; i++){
        if(!vis[i]){
            resp++;
            dfs(i);
        }
    }
    cout << resp << endl;
    return 0;
}