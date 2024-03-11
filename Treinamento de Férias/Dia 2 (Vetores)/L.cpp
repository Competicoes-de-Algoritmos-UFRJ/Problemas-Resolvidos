#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;

    int n, d; cin >> n >> d;

    char arr[n][d];
    //alternativa usando vector:
    //vector<vector<int>> (n, vector<int> (d)); 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < d; j++){
            cin >> arr[i][j];
        }
    }

    bool consec = false;
    int resposta = 0, cur = 0;
    for(int i = 0; i < d; i++){
        int quantos_no_dia = 0;
        for(int j = 0; j < n; j++){
            if(arr[j][i] == 'o') quantos_no_dia++;
        }
        if(quantos_no_dia == n){
            cur++;
            resposta = max(resposta, cur);
        }else{
            cur = 0;
        }
    }

    cout << resposta << endl;

}