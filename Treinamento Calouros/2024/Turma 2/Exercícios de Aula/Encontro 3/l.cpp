//https://cses.fi/problemset/task/1091 - Concert Tickets

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }

    for(int i=0; i<m; i++){
        int x;
        cin >> x;

        auto it = s.upper_bound(x);
        if(it!=s.begin()){
            it--;
            cout << *it << endl;
            s.erase(it);
        }else{
            cout << -1 << endl;
        }
    }

    return 0;
}