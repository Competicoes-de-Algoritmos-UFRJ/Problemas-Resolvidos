#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;

    int n; cin >> n;
    string s; cin >> s;

    int ans = -1;
    for(int i = 0; i < n-2; i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;

}