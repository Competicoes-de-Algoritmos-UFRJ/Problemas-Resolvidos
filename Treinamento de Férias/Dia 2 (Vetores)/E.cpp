#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;

    string s; cin >> s;

    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }

    if(sum % 9 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

}