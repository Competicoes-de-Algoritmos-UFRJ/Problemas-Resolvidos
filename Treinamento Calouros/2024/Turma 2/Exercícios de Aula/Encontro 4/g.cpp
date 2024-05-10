//https://neps.academy/br/exercise/2072 - Chuva (OBI 2022)

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, k;

    cin >> n >> k;

    vector<int> v(n+1), prefix(n+1), freq(1e6+5);

    for(int i=1; i<=n; i++){
        cin >> v[i];

        prefix[i]=prefix[i-1]+v[i];
    }

    // Eu quero saber quantos (i, j) tal que prefix[j] - prefix[i] == K -> prefix[j] == prefix[i] + K
    // Logo dado uma posição j depois de i, eu preciso saber quantos prefixos que vêm antes de j que somados com K são iguais ao prefixo de j

    int resp = 0;

    for(int i=0; i<=n; i++){
        resp+=freq[prefix[i]]; // vejo quantos prefix[i]+K, existem antes mim, checando a frequência de prefix[j]

        freq[prefix[i]+k]++; // atualizo a frequência para os j's posteriores
    }

    cout << resp << endl;

    return 0;
}