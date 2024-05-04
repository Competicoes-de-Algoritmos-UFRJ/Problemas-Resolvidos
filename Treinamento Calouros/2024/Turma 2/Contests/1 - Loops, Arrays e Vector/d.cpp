#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

char ma[105][105];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, d;
    cin >> n >> d;

    for(int i=0; i<n; i++){
        for(int j=0; j<d; j++){
            cin >> ma[i][j];
        }
    }

    int resp = 0, atual = 0;
    
    for(int i=0; i<d; i++){
        bool todos = 1;

        for(int j=0; j<n; j++){
            if(ma[j][i]=='x') todos = 0;
        }

        if(todos) atual++;
        else atual = 0;

        resp = max(resp, atual);
    }
    
    cout << resp << endl;
    return 0;
}