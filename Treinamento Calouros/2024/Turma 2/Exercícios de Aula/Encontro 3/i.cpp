//https://neps.academy/br/exercise/277 - Repositórios

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int c, n;
    cin >> c >> n;

    map<int, int> orig, att;

    for(int i=0; i<c; i++){
        int p, v;

        cin >> p >> v;

        orig[p] = v;
        
        att[p] = v;
    }

    for(int i=0; i<n; i++){
        int p, v;

        cin >> p >> v;

        if(att[p]==0){
            att[p] = v;
        }else if(v > att[p]){
            att[p] = v;
        }
    }

    for(pair<int, int> i : att){
        if(orig[i.first] < i.second){
            cout << i.first << ' ' << i.second << endl;
        }
    }

    return 0;
}