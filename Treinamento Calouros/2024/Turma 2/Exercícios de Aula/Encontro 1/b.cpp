//https://neps.academy/br/exercise/48 - Prêmio do Milhão

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;

    cin >> n;

    int soma = 0;
    bool foi = 0;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        soma+=x;

        if(foi==0 && soma>=1000000){
            foi = 1;
            cout << i+1 << endl;
        }
    }

    return 0;
}