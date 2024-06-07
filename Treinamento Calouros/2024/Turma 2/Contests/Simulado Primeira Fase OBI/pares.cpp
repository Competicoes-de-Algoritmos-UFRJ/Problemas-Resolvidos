//https://neps.academy/br/exercise/565 - Pares de Números

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n, I, F, v[1005];
    cin >> n >> I >> F;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int resp = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]+v[j]>=I && v[i]+v[j]<=F){
                resp++;
            }
        }
    }
    cout << resp << endl;
    return 0;
}