#include <bits/stdc++.h> 
using namespace std ;

// funcoes usadas
bool solve( vector<int> &lista , int n ) ; 

int main(){

    int t , n ; // t e n definidos no enunciado
    vector<int> lista ; 
    vector<bool> respostas ; 
    
    cin >> t ;

    respostas.resize(t) ;

    for(int i=0 ; i<t ; i++){
        lista.clear() ;

        cin >> n ;
        lista.resize(n) ;
        
        for(int j=0 ; j<n ; j++) cin >> lista[j] ;
        
        respostas[i] = solve(lista,n) ;
    }

    for(int i=0 ; i<t ; i++){
        if(respostas[i]) cout << "YES" << endl ;
        else cout << "NO" << endl ;
    }

    return 0 ;

}

bool solve( vector<int> &lista , int n ){

    // primeiro descobrimos a media da lista, para que todos os valores sejam iguais
    long long soma=0 ;
    for(int i=0 ; i<n ; i++) soma+=lista[i] ;
    int media = soma/n ;

    // agora simulamos percorrer a lista tentando fazer todos valores serem iguais a media

    // agua eh a quantidade de agua que temos sobrando para colocar no proximo container 
    // usamos long long pois valores maiores que 1e9 nao cabem no int
    long long reserva=0 ; 
    for(int i=0 ; i<n ; i++){
        
        // se o container tiver mais agua que a media, tiramos o excesso e adicionamos a nossa reserva
        // se o container tiver menos agua que a media, adicionamos da nossa reserva ateh o valor se tornar igual a media
        
        reserva+=lista[i]-media ; 
        
        // se retirarmos mais da reserva doq possuimos, eh impossivel destribuir de forma igual
        if(reserva<0) return false ;
    
    }

    // se chegamos no final, eh possivel destribuir de forma igual
    return true ;

}
