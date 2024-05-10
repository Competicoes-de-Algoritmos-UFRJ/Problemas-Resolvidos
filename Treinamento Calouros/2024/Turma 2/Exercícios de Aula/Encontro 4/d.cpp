//https://neps.academy/br/exercise/4 - Caverna de Ordinskaya

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
    
    long long resp=0;
    
    v[0]=min(v[0], m-v[0]);
    
    resp+=min(v[0], m-v[0]);
    
    for(int i=1; i<n; i++){
        int menor = min(v[i], m-v[i]);
        int maior = max(v[i], m-v[i]);
        
        if(menor>=v[i-1]){
            v[i]=menor;
            resp+=menor;
        }else if(maior>=v[i-1]){
            v[i]=maior;
            resp+=maior;
        }else{
            cout << -1 << endl;
            return 0;
        }
    }
    cout << resp << endl;

    return 0;
}