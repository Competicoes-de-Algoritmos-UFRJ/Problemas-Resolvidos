//https://neps.academy/br/exercise/365 - Troca

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, t;
    cin >> n >> t;

    vector<int> cima(n+1), baixo(n+1), prefix(n+5);

    for(int i=1; i<=n; i++){
        cin >> cima[i];
    }

    for(int i=1; i<=n; i++){
        cin >> baixo[i];
    }

    while(t--){
        int l, r;
        
        cin >> l >> r;

        prefix[l]+=1;

        prefix[r+1]-=1;
    }

    for(int i=1; i<=n; i++){
        prefix[i]+=prefix[i-1];
    }

    for(int i=1; i<=n; i++){
        if(prefix[i]%2==0){
            cout << cima[i] << ' ';
        }else{
            cout << baixo[i] << ' ';
        }
    }
    cout << endl;
    
    return 0;
}