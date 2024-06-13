//https://neps.academy/br/exercise/289 - Tá Ligado?

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int n, m;
vector<int> vec[100005];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    for(int i=0; i<m; i++){
        int t, a, b;
        cin >> t >> a >> b;

        if(t==0){
            int resp = 0;
            for(int j:vec[a]){
                if(j==b) resp = 1;
            }
            cout << resp << endl;
        }else{
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
    }

    return 0;
}