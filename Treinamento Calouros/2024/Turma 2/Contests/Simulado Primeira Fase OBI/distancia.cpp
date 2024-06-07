//https://neps.academy/br/exercise/466 - Distância entre Amigos

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    long long v[200005];

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    long long resp = 0, best = 0;

    // sabemos que a distância entre dois prédios (i, j), tal que i<j, é igual a v[i] + v[j] + (j-i)
    // manipulando a equação, temos (v[i]-i) + (v[j]+j), logo podemos testar todos os j's, e para cada j, pegar o maior de v[i]-i, que veio antes dele

    best = v[0]-0;

    for(int j=1; j<n; j++){
        resp = max(resp, v[j]+j + best);

        best = max(best, v[j]-j);
    }

    cout << resp << endl;

    return 0;
}