//https://neps.academy/br/exercise/975 - Três por Dois

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int soma = 0, cont = 0;
    for(int i=n-1; i>=0; i--){
        if(cont==2){
            cont = 0;
            continue;
        }
        
        soma+=v[i];
        cont++;
    }

    cout << soma << endl;

    return 0;
}