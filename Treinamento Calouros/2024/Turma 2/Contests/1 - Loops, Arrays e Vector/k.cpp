#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 2e5+5;

int n, t, c[mxn], r[mxn];

int acha_maior(int x){
    int rank = 0, player;

    for(int i=0; i<n; i++){
        if(c[i]==x){
            
            if(r[i]>rank){
                rank = r[i];
                player = i;
            }
        }
    }

    return player+1;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> t;

    bool temt = 0;

    for(int i=0; i<n; i++){
        cin >> c[i];

        if(c[i]==t) temt = 1;
    }

    for(int i=0; i<n; i++){
        cin >> r[i];
    }

    if(!temt){
        cout << acha_maior(c[0]) << endl;
    }else{
        cout << acha_maior(t) << endl;
    }

    return 0;
}