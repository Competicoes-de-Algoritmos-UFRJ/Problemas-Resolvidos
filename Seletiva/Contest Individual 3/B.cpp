#include <bits/stdc++.h>
 
using namespace std;

#define f first
#define s second
#define pb push_back
#define es " "
#define endl "\n"
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3f
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<int, pii> pip;
typedef unsigned long long ull;
const int mxn = 1e5+5;
const int mxm = 1e5+5;
const int MOD = 1e9+7;

int t, a, b, c;

int main(){
    fastio;
    cin >> t;
    while(t--){
        int n;
        string a;
        cin >> n >> a;
        int maior=0;
        for(char i:a){
            maior=max(maior, i-'a'+1);
        }
        cout << maior << endl;
    }
    return 0;
}
