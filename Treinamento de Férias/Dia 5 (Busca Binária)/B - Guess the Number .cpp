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
    int l = 1, r = 1e6;
    int ans = -1;
    while(l <= r){
        int mid = (l+r)/2;
        cout << mid << endl;
        cout.flush();

        string s;
        cin >> s;

        if(s.size() == 2){
            ans = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }

    assert(ans != -1);
    cout << "! " << ans << endl;
    cout.flush();
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
