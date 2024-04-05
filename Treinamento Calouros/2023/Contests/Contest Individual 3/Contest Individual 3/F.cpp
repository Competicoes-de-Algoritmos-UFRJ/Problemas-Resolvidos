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

        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int a=0, b=n-1;

        int resp=0;

        int pesoa=0, pesob=0, doces=0;

        while(a<=b){
            
            if(pesoa<=pesob){
                pesoa+=v[a];
                a++;
            }else{
                pesob+=v[b];
                b--;
            }
            
            doces++;

            if(pesoa==pesob) resp=doces;
        }

        cout << resp << endl;
    }

    return 0;
}
