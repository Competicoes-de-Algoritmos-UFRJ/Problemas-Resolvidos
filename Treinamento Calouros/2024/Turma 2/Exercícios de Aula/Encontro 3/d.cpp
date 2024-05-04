//https://neps.academy/br/exercise/243 - Olimpíadas

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

struct pais {
    int ouro, prata, bronze, id;
};

bool cmp(pais a, pais b){
    if(a.ouro != b.ouro) return a.ouro>b.ouro;

    if(a.prata != b.prata) return a.prata>b.prata;

    if(a.bronze != b.bronze) return a.bronze>b.bronze;

    return a.id<b.id;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<pais> v(n);

    for(int i=0; i<n; i++){
        v[i].ouro = v[i].prata = v[i].bronze = 0;
        v[i].id = i;
    }

    for(int i=0; i<m; i++){
        int o, p, b;
        cin >> o >> p >> b;

        v[o-1].ouro++;
        v[p-1].prata++;
        v[b-1].bronze++;
    }
    
    sort(v.begin(), v.end(), cmp);

    for(pais i:v){
        cout << i.id+1 << ' ';
    }
    cout << endl;
    
    return 0;
}