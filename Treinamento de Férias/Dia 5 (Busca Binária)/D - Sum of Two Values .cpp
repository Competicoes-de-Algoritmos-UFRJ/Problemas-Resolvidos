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
    int n, x;
    cin >> n >> x;

    vector <pair<int,int>> arr(n);
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        arr[i] = {x, i};
    }

    sort(arr.begin(), arr.end());

    for(int i = n-1; i >= 0; i--){
        int l = 0, r = i-1;
        while(l <= r){
            int mid = (l+r)/2;
            int goal = x - arr[i].first;

            if(arr[mid].first > goal){
                r = mid-1;
            }else if(arr[mid].first < goal){
                l = mid+1;
            }else{
                cout << arr[i].second +1 << " " << arr[mid].second+1 << endl;
                return;
            }
        }
    }    

    cout << "IMPOSSIBLE" << endl;
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
