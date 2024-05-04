#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    string s;
    cin >> n >> s;

    for(int i=0; i<n-2; i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}