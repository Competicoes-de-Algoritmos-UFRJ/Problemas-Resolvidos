#include <bits/stdc++.h>
using namespace std ;

#define fastio ios_base::sync_with_stdio(false) ; cin.tie(NULL) // NAO VOU EXPLICAR, mas nessa questao precisa

// Constantes dadas no enunciado
const int MOD = (1e8)+7 , MAXN = 5*(1e5) ;

// funcoes usadas
int solve(vector<int> &fib , int numero) ;

int main(){

    fastio ;

    int t , n ;
    vector<int> respostas ;
    vector<int> fibonacci(MAXN+1,-1) ;

    fibonacci[1] = 1 ;
    fibonacci[2] = 1 ;

    cin >> t ;
    respostas.resize(t) ;

    for(int i=0 ; i<t ; i++){
        cin >> n ;
        respostas[i] = solve(fibonacci,n) ;
    }

    for(int i=0 ; i<t ; i++) cout << respostas[i] << "\n" ;

    return 0 ;
}

int solve(vector<int> &fib , int numero){
    if(fib[numero]!=-1) return fib[numero] ; // se o valor ja foi definido, retorne ele
    return fib[numero] = (solve(fib,numero-1)%MOD + solve(fib,numero-2)%MOD)%MOD ; // caso contrario, calcule o valor e o retorne
}
