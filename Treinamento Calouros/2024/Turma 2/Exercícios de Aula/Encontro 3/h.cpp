//https://neps.academy/br/exercise/2233 - Mini Dicionário

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    map<string, string> m;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string a, b;
        cin >> a >> b;

        m[a]=b;
    }
    
    string agr;
    while(cin >> agr){
        cout << m[agr] << ' ';
    }

    return 0;
}