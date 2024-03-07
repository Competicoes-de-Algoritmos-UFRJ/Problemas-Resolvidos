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
    int n, q;
    cin >> n >> q;

    vector <int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }   

    while(q--){
        int x;
        cin >> x;

        int l = 0, r = n-1;
        int ans = -1;
        while(l <= r){
            int mid = (l+r)/2;
            if(arr[mid] > x){
                r = mid-1;
            }else if(arr[mid] < x){
                l = mid+1;
            }else{
                ans = mid;
                r = mid-1;
            }
        }

        cout << ans << endl;
    }
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
