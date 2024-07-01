//https://neps.academy/br/exercise/73 - Família Real

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 1e4+5;

vector<int> vec[mxn];
int nivel[mxn], qnt_nivel[mxn];

void dfs(int x, int nv){
    nivel[x] = nv;
    qnt_nivel[nv]++;

    for(int i:vec[x]){
        dfs(i, nv+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;

        vec[x].push_back(i);
    }

    dfs(0, 0);

    vector<int> agr(n+1);

    for(int i=0; i<m; i++){
        int x;
        cin >> x;

        agr[nivel[x]]++;

    }

    for(int i=1; i<=n; i++){
        if(!qnt_nivel[i]) break;

        cout << fixed << setprecision(2) << 100.0*agr[i]/qnt_nivel[i] << ' ';
    }
    cout << endl;

    return 0;
}