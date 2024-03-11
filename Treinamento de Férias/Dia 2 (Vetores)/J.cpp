#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        vector<bool> visitado(2e5 + 7, false); //vetor para marcar se o número i já apareceu
        
        int ans = 0;
        for(int i = n-1; i >=0 ; i--){
            if(!visitado[v[i]]){
                visitado[v[i]] = true;
            }else{
                ans = i+1;
                break;
            }
        }

        cout << ans << "\n";

    }
    
}   