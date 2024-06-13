//https://neps.academy/br/exercise/290 - Aeroporto

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, m, cont = 0;
    while(cin >> n >> m && n!=0 && m!=0){
        vector<int> grau(n+1);
        int maior = 0;
        for(int i=0; i<m; i++){
            int a, b;
            cin >> a >> b;
            grau[a]++, grau[b]++;
            maior=max({maior, grau[a], grau[b]});
        }
        cout << "Teste " << ++cont << endl;
        for(int i=1; i<=n; i++){
            if(grau[i]==maior){
                cout << i << ' ';
            }
        }
        cout << endl << endl;
    }

    return 0;
}