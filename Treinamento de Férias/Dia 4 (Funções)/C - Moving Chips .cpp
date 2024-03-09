#include <bits/stdc++.h> 
using namespace std ;

// constantes e tamanhos maximos
const int INF = 2e9 ;

// funcoes usadas
int solve1(int n, vector<int> &lista ) ; // solucao 1 contando a quantidade de 0's entre os 1's
int solve2(int n, vector<int> &lista ) ; // solucao 2 simulando o descrito no enunciado (brute force)
bool check(int n, vector<int> &lista) ; // verifica se existem 0's entre os 1's 

// funcoes ja nativas no c++ 
void swap(int &a , int&b) ; // troca o valor das variaveis a e b 
int max(int a, int b) ; // retorna o maior entre a e b
int min(int a, int b) ; // retorna o menor entre a e b

int main(){

    int t , n ;
    vector<int> lista , respostas ;
    
    cin >> t ;

    respostas.resize(t) ;

    for(int i=0 ; i<t ; i++){
        lista.clear() ;

        cin >> n ;
        lista.resize(n) ;

        for(int j=0 ; j<n ; j++) cin >> lista[j] ;
        respostas[i] = solve1(n,lista) ; // pode trocar para o solve2 que tambem funciona
    }

    for(int i=0 ; i<t ; i++) cout << respostas[i] << endl ;

    return 0 ;

}

int solve1(int n, vector<int> &lista ){

    // descobrimos o primeiro e o ultimo 1 
    int primeiro=INF , ultimo=0 ; 
    
    // inicializamos com extremos, o primeiro vai ser menor que infinito
    // e o ultimo vai ser maior que 0

    for(int i=0 ; i<n ; i++){
        if(lista[i]==1){
            primeiro=min(primeiro,i) ;
            ultimo=max(ultimo,i) ;
        }
    }

    int contador=0 ; // conta a quantidade de zeros entre o primeiro e ultimo 1 
    for(int i=primeiro ; i<=ultimo ; i++){
        if(lista[i]==0){
            if( i>=primeiro && i<=ultimo ) contador++ ;
        }
    }

    return contador ;

}

int solve2(int n, vector<int> &lista ){

    int contador=0 ; // conta a quantidade de trocas
    while(!check(n,lista)){

        int pos_do_ultimo_1 = -1 ; // valor extremo, o ultimo 1 nunca vai ser -1
        for(int i=n-1 ; i>=0 ; i--){
            
            // se nao encontramos o ultimo 1 e o elemento que estamos eh um, definimos a posicao do ultimo 1
            if( pos_do_ultimo_1==-1 && lista[i]==1) pos_do_ultimo_1=i ;

            // se encontramos o ultimo 1 e o elemento em que estamos eh 0, realizamos a troca
            if( pos_do_ultimo_1!=-1 && lista[i]==0 ){ 
                swap(lista[i],lista[pos_do_ultimo_1]) ;
                contador++ ;
                break ; // realizamos a troca e saimos do loop
            }

        }

    }

    return contador ;

}

bool check(int n, vector<int> &lista){

    // descobrimos o primeiro e o ultimo 1 
    int primeiro=INF , ultimo=0 ; 
    
    // inicializamos com extremos, o primeiro vai ser menor que infinito
    // e o ultimo vai ser maior que 0

    for(int i=0 ; i<n ; i++){
        if(lista[i]==1){
            primeiro=min(primeiro,i) ;
            ultimo=max(ultimo,i) ;
        }
    }

    for(int i=primeiro ; i<=ultimo ; i++){
        if(lista[i]==0) return false ;
    }

    return true ;

}

// funcoes nativas do c++ simples descritas

void swap(int &a , int&b){
    int temp = a;
    a = b ;
    b = temp ;
    return ;
} 

int max(int a, int b){
    if(a>b) return a ;
    return b ;
}

int min(int a, int b){
    if(a<b) return a ;
    return b ;
}
