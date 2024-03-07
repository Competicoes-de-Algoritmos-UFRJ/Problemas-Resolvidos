#include <bits/stdc++.h> 
using namespace std ;

// funcoes usadas
vector<int> solve(int n, int k) ;

int main(){

    int t , n , k ; // t , n e k definidos no enunciado
    vector<vector<int>> respostas ;
    
    cin >> t ;

    respostas.resize(t) ;

    for(int i=0 ; i<t ; i++){
        cin >> n >> k ;
        respostas[i] = solve(n,k) ;
    }

    for(int i=0 ; i<t ; i++){
        for(int numero : respostas[i]) cout << numero << " " ;
        cout << endl ;
    }

    return 0 ;

}

vector<int> solve(int n, int k){
    
    vector<int> resp ;
    for(int i=n-k ; i<=n ; i++) resp.push_back(i) ; // k elementos crescentes
    for(int i=n-k-1 ; i>0 ; i--) resp.push_back(i) ; // todo resto decrescente

    return resp ;

}
