//https://neps.academy/br/exercise/391 - Fechadura

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int resp = 0;

    for(int i=0; i<n-1; i++){
        if(v[i]!=m){
            int diff = m - v[i];

            v[i+1]+=diff;

            resp+=abs(diff);
        }
    }
    
    cout << resp << endl;

    return 0;
}