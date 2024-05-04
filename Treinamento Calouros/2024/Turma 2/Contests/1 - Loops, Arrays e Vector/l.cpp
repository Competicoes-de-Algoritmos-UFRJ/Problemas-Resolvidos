#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    string s;
    cin >> s;

    long long pot = 1, soma = 0;

    for(int i=int(s.size())-1; i>=0; i--){

        soma += (s[i] - 'A' + 1) * pot;

        pot*=26;
    }

    cout << soma << endl;

    return 0;
}