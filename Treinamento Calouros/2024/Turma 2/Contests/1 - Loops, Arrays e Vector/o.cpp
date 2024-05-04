#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    long long resp = 0;

    for(int i=1; i<n; i++){
        if(v[i]<v[i-1]){
            resp+=v[i-1] - v[i];
            v[i] = v[i-1];
        }
    }

    cout << resp << endl;

    return 0;
}