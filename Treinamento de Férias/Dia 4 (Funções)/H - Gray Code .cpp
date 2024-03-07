#include <bits/stdc++.h>
using namespace std ;

// funcoes usadas
vector<string> solve(int n) ;

int main(){

    int n ;
    vector<string> resposta ;

    cin >> n ;

    resposta = solve(n) ;

    for(string s : resposta) cout << s << endl ;

    return 0 ;
}

// solve eh recursivo
vector<string> solve(int n){

    vector<string> resposta ;

    // caso base
    if(n==1){
        resposta.push_back("1") ;
        resposta.push_back("0") ;
        return resposta ;
    }

    // para todos os casos, para mudar apenas um digito, usamos a resposta anterior e mudamos um digito no final
    vector<string> anterior = solve(n-1) ;
    for(int i=0 ; i < (int) anterior.size() ; i++) resposta.push_back('1' + anterior[i]) ;

    // invertemos a resposta do anterior, para que o sufixo do ultimo que começa com um, seja igual o primeiro que começa com zero
    reverse(anterior.begin(),anterior.end()) ;
    for(int i=0 ; i < (int) anterior.size() ; i++) resposta.push_back('0' + anterior[i]) ;

    return resposta ;

}
