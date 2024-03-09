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

int n, A, B;
vector<array<ll,3>> arr;

bool possible(int k){
    //a + b = k
    //new_B = B - b
    //new_A = A - a

    //new_B >= 1 -> B - b >= 1 -> B - (k-a) >= 1
    //-> B -k + a >= 1 -> a >= 1 - B + k
    int l = max(0, k - B + 1); //min value of a
    //new_A >= 1 -> A - a >= 1 -> A - 1 >= a
    int r = min(k, A-1); //max value of a

    while(l <= r){
        assert(l >= 0 && r >= 0);
        ll mid = (l+r)/2; //mid -> value of a

        int new_A = A - mid;
        int new_B = B - (k - mid);
        assert(new_A >= 1 && new_B >= 1);

        bool troll = false;
        for(int i = 0; i < n; i++){
            if(arr[i][0]*new_A + arr[i][1]*new_B > arr[i][2]){
                if(arr[i][0] > arr[i][1]){
                    l = mid+1;
                }else{
                    r = mid-1;
                }
                troll = true;
                break;
            }
        }

        if(troll) continue;
        return true;
    }
    return false;
}


void solve(int tc){
    cin >> n >> A >> B;

    arr.resize(n);
    for(int i = 0; i < n; i++){
        ll a, b, t;
        cin >> a >> b >> t;
        arr[i] = {a, b, t};
    }

    //A - k1 = 1; B - k2 = 1
    // => k1 = A-1, k2 = B-1
    // => r = k1+k2 = A+B-2

    ll l = 0, r = A+B-2;
    int ans = -1;
    int contador = 0;
    while(l <= r){
        ll mid = (l + r)/2;
        if(possible(mid)){
            ans = mid;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }

    cout << ans << endl;
}     

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int tc = -1;
    if(tc != 1) cin >> tc;
    
    for (int t = 0; t < tc; t++) {
        solve(t);
    }

    return 0;
}
