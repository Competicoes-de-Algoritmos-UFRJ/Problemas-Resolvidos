#include <bits/stdc++.h>
using namespace std ;

// funcoes usadas 
bool compare(string &a, string &b) ;

int main(){
    int n ; 
    vector<string> lista ;

    cin >> n ;

    lista.resize(n) ;

    for(int i=0 ; i<n ; i++) cin >> lista[i] ;

    sort(lista.begin(),lista.end(),compare) ;

    for(string s : lista) cout << s ;
    cout << endl ;

    return 0 ;
}

// funcao de comparacao que testa as possibilidadas descritas no enunciado
bool compare(string &a, string &b){
    if(a+b<b+a) return true ;
    return false ;
}
