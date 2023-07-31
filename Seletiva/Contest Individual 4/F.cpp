#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'



int main(){
    fastio;
    int n, q;

    cin >> n >> q;

    set<int> nao_chamou, nao_foi;

    for(int i=1; i<=n; i++){
        nao_chamou.insert(i);
    }

    while(q--){
        int t;
        cin >> t;

        if(t==1){
            int menor = *nao_chamou.begin();

            nao_chamou.erase(menor);

            nao_foi.insert(menor); 

        }else if(t==2){
            int x;

            cin >> x;

            nao_foi.erase(x);
        }else{
            int menor = *nao_foi.begin();

            cout << menor << endl;
        }
    }
    return 0;
}
