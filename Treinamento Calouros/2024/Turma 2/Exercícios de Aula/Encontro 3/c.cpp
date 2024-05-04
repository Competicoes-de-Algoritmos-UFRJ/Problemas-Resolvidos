//https://neps.academy/br/exercise/246 - Matryoshka

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(n), v_ord(n);

    for(int i=0; i<n; i++){
        cin >> v[i];
        v_ord[i] = v[i];
    }

    sort(v_ord.begin(), v_ord.end());

    vector<int> ans;

    for(int i=0; i<n; i++){
        if(v[i]!=v_ord[i]){
            ans.push_back(v[i]);
        }
    }

    cout << ans.size() << endl;

    sort(ans.begin(), ans.end());

    for(int i:ans){
        cout << i << ' ';
    }
    cout << endl;
    
    return 0;
}