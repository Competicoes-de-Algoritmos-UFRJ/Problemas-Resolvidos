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
    int n, t;
    cin >> n >> t;

    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    ll l = 1, r = 1e18;
    ll ans = -1;
    while(l <= r){
        ll mid = (l+r)/2;

        ll curr = 0;
        for(int i = 0; i < n; i++){
            if(curr < t) curr += mid/arr[i];
        }

        if(curr >= t){
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
