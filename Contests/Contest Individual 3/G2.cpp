#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

const int mxn = 55;

int t, n, m;
char ma[mxn][mxn];

int main(){
    fastio;
    cin >> t;
    while(t--){
        cin >> n >> m;

        queue<pair<int, int> > fila;

        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> ma[i][j];
            }
        }

        for(int i=n; i>=1; i--){
            for(int j=m; j>=1; j--){
                if(ma[i][j]=='*') fila.push({i, j});
            }
        }

        while(!fila.empty()){
            pair<int, int> atual = fila.front();
            fila.pop();

            if(atual.first+1>n || ma[atual.first+1][atual.second]=='*' || ma[atual.first+1][atual.second]=='o'){
                ma[atual.first][atual.second]='*';
            }else{
                ma[atual.first][atual.second]='.';
                fila.push({atual.first+1, atual.second});
            }
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout << ma[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}
