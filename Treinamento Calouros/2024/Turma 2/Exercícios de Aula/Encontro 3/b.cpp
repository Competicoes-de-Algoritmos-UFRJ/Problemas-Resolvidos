//https://neps.academy/br/exercise/546 - Lista de Chamada

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<string> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    cout << v[k-1] << endl;
    
    return 0;
}