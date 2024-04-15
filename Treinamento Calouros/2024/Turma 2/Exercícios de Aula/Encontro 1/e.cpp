//https://neps.academy/br/exercise/241 - Campo Minado

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 50+5;

int v[mxn];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<n; i++){
        int cont = 0;

        if(v[i]==1) cont++;
        
        if(i>0 && v[i-1]==1) cont++;

        if(i<n-1 && v[i+1]==1) cont++;

        cout << cont << endl;
    }
    return 0;
}