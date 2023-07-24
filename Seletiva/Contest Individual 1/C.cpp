#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

int main(){
    fastio;
    int n, m;

    cin >> n >> m;

    vector<string> v(n), d(m+1);
    vector<int> p(m+1);

    map<string, int> preco;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=1; i<=m; i++){
        cin >> d[i];
    }

    for(int i=0; i<m+1; i++){
        cin >> p[i];

        if(i>=1){
            preco[d[i]]=p[i];
        }
    }

    int soma = 0;

    for(int i=0; i<n; i++){
        if(preco.count(v[i])==1){
            soma+=preco[v[i]];
        }else{
            soma+=p[0];
        }
    }
    cout << soma << endl;
    return 0;
}
