//https://neps.academy/br/exercise/1979 - Atribuição de parceiros

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, string> mapa;

    vector<string> v1(n), v2(n);

    for(int i=0; i<n; i++){
        cin >> v1[i];
    }

    for(int i=0; i<n; i++){
        cin >> v2[i];
    }

    string ans = "good";

    for(int i=0; i<n; i++){
        if(v1[i]==v2[i] || (mapa.count(v2[i]) && mapa[v2[i]]!=v1[i])){
            ans = "bad";
            break;
        }

        mapa[v1[i]] = v2[i];
    }

    cout << ans << endl;

    return 0;
}