#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

char ma[105][105];

int main(){
    fastio;
    int n, m;

    cin >> n >> m;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> ma[i][j];
        }
    }
    int resp=0, atual=0;
    for(int j=1; j<=m; j++){
        bool livre = 1;
        for(int i=1; i<=n; i++){
            if(ma[i][j]=='x') livre=0;
        }

        if(livre) atual++;
        else atual=0;

        resp=max(resp, atual);
    }
    cout << resp << endl;
    return 0;
}
