//https://neps.academy/br/exercise/8 - Po que mão

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, v[3];
    cin >> n >> v[0] >> v[1] >> v[2];

    sort(v, v+3);

    int resp = 0;
    for(int i=0; i<3; i++){
        if(v[i]<=n){
            resp++;
            n-=v[i];
        }
    }
    cout << resp << endl;
    return 0;
}