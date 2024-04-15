//https://neps.academy/br/exercise/47 - Código (OBI 2015)

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 1e4+5;

int v[mxn];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int resp = 0;
    for(int i=0; i<n-2; i++){
        if(v[i]==1 && v[i+1]==0 && v[i+2]==0){
            resp++;
        }
    }
    cout << resp << endl;
    return 0;
}