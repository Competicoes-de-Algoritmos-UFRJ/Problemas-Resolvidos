//https://neps.academy/br/exercise/533 - Chuva (OBI 2011)

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 1e2+5;

int n, ma1[mxn][mxn], ma2[mxn][mxn];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> ma1[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> ma2[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ma1[i][j]+ma2[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}