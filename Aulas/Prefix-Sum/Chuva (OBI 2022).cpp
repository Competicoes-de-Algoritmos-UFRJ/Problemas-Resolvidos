#include <bits/stdc++.h>

using namespace std;

const int mxn = 1e5+5;

int n, s, v[mxn], prefix[mxn], freq[mxn];

int main(){
    cin >> n >> s;

    for(int i=1; i<=n; i++){
        cin >> v[i];

        prefix[i] = prefix[i-1] + v[i];
    }
    
    long long resp = 0;

    freq[s]=1;

    for(int i=1; i<=n; i++){
        resp += freq[prefix[i]];

        freq[s + prefix[i]]++;
    }
    cout << resp << endl;
    return 0;
}
