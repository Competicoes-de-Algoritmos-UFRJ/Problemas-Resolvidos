#include <bits/stdc++.h>
 
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'
 
int t, n;
 
int main(){
    fastio;
    cin >> t;
 
    while(t--){
        cin >> n;
 
        vector<int> v(n), freq(n+1);
 
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
 
        int resp=0;
        
        for(int i=0; i<n; i++){
            freq[v[i]]++;
 
            if(freq[v[i]]==3){
                cout << v[i] << endl;
                resp=1;
                break;
            }
        }
        if(!resp){
            cout << -1 << endl;
        }
    }
    return 0;
}
