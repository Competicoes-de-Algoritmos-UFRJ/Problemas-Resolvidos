//https://neps.academy/br/exercise/524 - Soma das Casas

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++) cin >> v[i];

    int k;
    cin >> k;

    for(int i=0; i<n; i++){
        int val = k - v[i];

        int l=i+1, r=n-1, pos = -1;
    
        while(l<=r){
            int mid = (l+r)/2;

            if(v[mid] == val){
                pos = mid;
                break;
            }else if(v[mid]>val){
                r = mid-1;
            }else{
                l = mid+1;
            }
        }

        if(pos!=-1){
            cout << v[i] << ' ' << val << endl;
            return 0;
        }
    }

    return 0;
}