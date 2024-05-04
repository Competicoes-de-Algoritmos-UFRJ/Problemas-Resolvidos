#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int q;
    cin >> q;

    vector<int> v;

    for(int i=0; i<q; i++){
        int t, x;
        cin >> t >> x;

        if(t==1){
            v.push_back(x);
        }else{
            cout << v[int(v.size()) - x] << endl;
        }
    }

    return 0;
}