#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'



int main(){
    fastio;
    int n;
    cin >> n;

    vector<string> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    map<string, int> mapa;

    int resp=0;

    for(int i=0; i<n; i++){
        string a = v[i];
        string b = v[i];

        reverse(b.begin(), b.end());

        if(mapa.count(a)==0 && mapa.count(b)==0){
            resp++;
        }
        
        mapa[a]=1;
    }

    cout << resp << endl;
    
    return 0;
}
