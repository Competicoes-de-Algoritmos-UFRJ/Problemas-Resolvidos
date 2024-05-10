//https://neps.academy/br/exercise/248 - Dentista

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n;

    cin >> n;

    vector<pair<int, int> > v(n);

    for(int i=0; i<n; i++){
        cin >> v[i].second >> v[i].first;
    }

    sort(v.begin(), v.end()); // ordeno pelo tempo de término da consulta

    int livre = 0, resp = 0;

    for(pair<int, int> i:v){
        // se o horário de entrada for maior ou igual que o primeiro horário livre eu faço essa consulta
        // e atualizo o primeiro horário livre
        if(i.second >= livre){
            livre = i.first; 
            resp++;
        }
    }

    cout << resp << endl;
    return 0;
}