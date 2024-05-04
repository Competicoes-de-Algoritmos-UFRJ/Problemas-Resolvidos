#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;

        vector<int> v(n), freq(n+1);

        for(int i=0; i<n; i++){
            cin >> v[i];
            freq[v[i]]++;
        }

        int need = 0;

        for(int i=1; i<=n; i++){
            if(freq[i]>1) need++;
        }

        for(int i=0; i<n; i++){
            if(!need){
                cout << i << endl;
                break;
            }
            freq[v[i]]--;
            if(freq[v[i]]==1) need--;
        }
    }
    return 0;
}