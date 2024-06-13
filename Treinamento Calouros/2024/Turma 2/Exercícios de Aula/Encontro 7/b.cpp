//https://neps.academy/br/exercise/329 - Costa

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    char ma[1005][1005];

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ma[i][j];
        }
    }
    int resp = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(ma[i][j]=='.') continue;

            int cont = 0;
            
            if(i-1>=1 && ma[i-1][j]=='#') cont++;
            if(i+1<=n && ma[i+1][j]=='#') cont++;
            if(j-1>=1 && ma[i][j-1]=='#') cont++;
            if(j+1<=m && ma[i][j+1]=='#') cont++;

            if(cont!=4) resp++;
        }
    }
    cout << resp << endl;
    return 0;
}