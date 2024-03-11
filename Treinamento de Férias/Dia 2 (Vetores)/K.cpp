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

        int max1 = 0, indMax1 = -1;
        for(int i = 0; i < n; i++){
           if(v[i] == max(max1, v[i])){
                max1 = v[i];
                indMax1 = i;
           }
        }
        
        int max2 = 0;
        for(int i = 0; i < n; i++){
            if(i == indMax1) continue;
            max2 = max(max2, v[i]);
        }

        for(int i = 0; i < n; i++){
            if(i == indMax1){
                cout << v[i] - max2 << " ";
            }else{
                cout << v[i] - max1 << " ";
            }
        }
        cout << endl;
    }
    
}   