//https://neps.academy/br/exercise/605 - Pão a Metro

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 1e4+5;

int n, k, v[mxn];

int f(int x){
    int fatias = 0;
    for(int i=0; i<k; i++){
        fatias+=v[i]/x;
    }
    return fatias;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    cin >> n;

    cin >> k;

    for(int i=0; i<k; i++){
        cin >> v[i];
    }

    int l = 1, r = 1e4, resp = -1;

    while(l<=r){
        int mid = (l+r)/2;

        int val = f(mid);

        if(val>=n){
            resp = mid;
            l = mid+1;
        }else{
            r = mid-1;
        }
    }

    cout << resp << endl;

    return 0;
}