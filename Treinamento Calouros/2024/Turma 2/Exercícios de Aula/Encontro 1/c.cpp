//https://neps.academy/br/exercise/324 - Garçom

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;

    cin >> n;

    int soma = 0;

    for(int i=0; i<n; i++){
        int l, c;
        cin >> l >> c;

        if(l>c){
            soma+=c;
        }
    }
    cout << soma << endl;
    return 0;
}