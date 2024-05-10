//https://neps.academy/br/exercise/244 - Estratégia Gulosa

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    vector<int> s = {100, 50, 25, 10, 5, 1};

    int v;
    cin >> v;

    int resp = 0;

    for(int i:s){
        int div = v/i;
        
        v -= div*i;

        resp+=div;
    }

    cout << resp << endl;

    return 0;
}