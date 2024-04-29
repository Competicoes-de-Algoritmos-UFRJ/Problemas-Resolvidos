//https://neps.academy/br/exercise/384 - Fila (OBI 2014)

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 5e4+5;
const int mxm = 1e6+5;

int v[mxn], deixou[mxm];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, m;

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }

    cin >> m;
    for(int i=1; i<=m; i++){
        int x;
        cin >> x;
        deixou[x] = 1;
    }

    for(int i=1; i<=n; i++){
        if(!deixou[v[i]]){
            cout << v[i] << ' ';
        }
    }
    cout << endl;
    return 0;
}