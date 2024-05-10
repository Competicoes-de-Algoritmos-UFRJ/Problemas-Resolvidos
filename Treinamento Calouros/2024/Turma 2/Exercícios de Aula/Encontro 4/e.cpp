//https://neps.academy/br/exercise/16 - Segredo do Cofre

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 1e5+5;

int prefix[mxn][10];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        int x;
        cin >> x;

        for(int j=0; j<10; j++){
            prefix[i][j]=prefix[i-1][j];
        }

        prefix[i][x]++;
    }

    vector<int> resp(10);

    int last = 0;

    for(int i=1; i<=m; i++){
        int atual;
        cin >> atual;

        if(atual>last){
            for(int j=0; j<10; j++){
                resp[j]+=prefix[atual][j] - prefix[last][j];
            }
        }else{
            for(int j=0; j<10; j++){
                resp[j]+=prefix[last-1][j] - prefix[atual-1][j];
            }
        }

        last = atual;
    }

    for(int i:resp){
        cout << i << ' ';
    }
    cout << endl;

    return 0;
}