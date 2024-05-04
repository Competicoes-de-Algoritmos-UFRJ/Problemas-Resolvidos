//https://neps.academy/br/exercise/253 - Times

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxt = 1e3+5;

vector<string> times[mxt];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<pair<int, string> > v(n);

    for(int i=0; i<n; i++){
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end(), greater<pair<int, string> >());

    for(int i=0; i<n; i++){
        times[i%t].push_back(v[i].second);
    }

    for(int i=0; i<t; i++){
        cout << "Time " << i+1 << endl;

        sort(times[i].begin(), times[i].end());

        for(string j:times[i]){
            cout << j << endl;
        }
        cout << endl;
    }

    return 0;
}