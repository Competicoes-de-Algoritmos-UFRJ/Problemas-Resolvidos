#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

int main(){
    fastio;
    int n, k;

    cin >> n >> k;

    vector<pair<int, int> > v(n);
    
    long long soma_total = 0, soma_parcial=0;

    for(int i=0; i<n; i++){
        cin >> v[i].first >> v[i].second;

        soma_total+=v[i].second;
    }

    sort(v.begin(), v.end());

    if(soma_total<=k){
        cout << 1 << endl;
    }else{
        for(int i=0; i<n; i++){
            soma_parcial+=v[i].second;

            if(soma_total - soma_parcial <= k){
                cout << v[i].first+1 << endl;
                break;
            }
        }
    }

    return 0;
}
