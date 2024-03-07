#include <bits/stdc++.h>
using namespace std ;

#define fastio ios_base::sync_with_stdio(false) ; cin.tie(NULL) // NAO VOU EXPLICAR, mas nessa questao precisa

// funcoes usadas
bool compare(pair<int,int> &a, pair<int,int> &b) ;

int main(){
    
    fastio ;

    int t , n ;
    vector<vector<pair<int,int>>> respostas ; 
    vector<pair<int,int>> pares ;

    cin >> t ;
    respostas.resize(t) ;

    for(int i=0 ; i<t ; i++){
        pares.clear() ;

        cin >> n ;
        pares.resize(n) ;

        for(int j=0 ; j<n ; j++) cin >> pares[j].first >> pares[j].second ;
        sort(pares.begin(),pares.end(),compare) ;

        respostas.push_back(pares) ;
    }

    for(vector<pair<int,int>> lista_pares : respostas){
        for(pair<int,int> par : lista_pares){
            cout << par.first << " " << par.second << "\n" ;
        }
    }

    return 0 ;
}

// funcao de comparacao escrita conforme o descrito no enunciado
bool compare(pair<int,int> &a, pair<int,int> &b){
    if( (a.first>b.first) || (a.first==b.first && a.second<b.second) ) return false ;
    return true ;
}
