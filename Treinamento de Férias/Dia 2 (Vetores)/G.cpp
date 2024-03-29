#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;

    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int ans = 0;
    for(int i = 1; i < n; i++){
        if(v[i] < v[i-1]){
            ans += v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }

    cout << ans << endl;
}