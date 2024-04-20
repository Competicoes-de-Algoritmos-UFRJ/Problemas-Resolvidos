//https://neps.academy/br/exercise/160 - Vestibular

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;

    cin >> n;

    string gaba, cand;

    cin >> gaba >> cand;

    int acertos = 0;
    for(int i = 0; i<n; i++){
        if(gaba[i] == cand[i]) acertos++;
    }
    cout << acertos << endl;
    
    return 0;
}