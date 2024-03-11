#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;

    string s; cin >> s;

    reverse(s.begin(), s.end()); //conseguimos obter o mesmo resultado com um for, mas fica a dica :)
    
    long long sum = 0;
    long long mult = 1;
    for(int i = 0; i < s.size(); i++){
        sum += (s[i] - 'A' + 1) * mult;
        mult *= 26;
    }

    cout << sum << endl;
}   