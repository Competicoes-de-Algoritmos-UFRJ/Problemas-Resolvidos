#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define endl '\n'

typedef double dbl;
typedef long long ll;
typedef unsigned long long ull;

const int inf = 1e9;
const ll binf = 1e18;
const dbl eps = -1e9;

void solve(ll tc){
    int n, k;
    cin >> n >> k;

    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll l = *max_element(arr.begin(), arr.end()), r = (ll)1e15;
    ll ans = -1;
    while(l <= r){
        ll mid = (l + r)/2;

        ll curr = 0;
        ll res = 1;
        for(int i = 0; i < n; i++){
            if(curr + arr[i] > mid){
                res += 1;
                curr = 0;
            }
            curr += arr[i];
        }

        if(res <= k){
            ans = mid;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }

    assert(ans != -1);
    cout << ans << endl;
}   

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc = -1;
    tc = 1;
    if(tc != 1) cin >> tc;
    
    for (int t = 0; t < tc; t++) {
        solve(t);
    }

    return 0;
}
