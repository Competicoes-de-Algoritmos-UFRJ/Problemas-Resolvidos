#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> called(n+1), resp;

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;

        if(!called[i]) called[x] = 1;
    }

    for(int i=1; i<=n; i++){
        if(!called[i]) resp.push_back(i);
    }

    cout << resp.size() << endl;

    for(int i:resp){
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}