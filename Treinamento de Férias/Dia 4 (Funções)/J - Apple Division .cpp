#include <bits/stdc++.h>
using namespace std ;

// constantes 
const long long INF = 2e18 ;

// variaveis globais
int n ;
long long total=0 , resp=INF , sum=0 ;
vector<int> lista ;

// funcoes usadas
void solve(int i) ;

int main(){

    cin >> n ;
    lista.resize(n) ;
    for(int i=0 ; i<n ; i++) cin >> lista[i] ;

    // definimos o tamanho total da lista
    for(int i=0 ; i<n ; i++) total += lista[i] ;

    solve(0) ;

    cout << resp << endl ;

    return 0 ;
}

// solve eh recursiva e meio complicada de entender, pode me chamar pra explicar melhor se quiser
void solve(int i){

    if(i==n){ // quanto testarmos para todos elementos da lista, pegamos a resposta    
        long long outra_parcela , diferenca ;

        outra_parcela = total-sum ;
        diferenca = abs(sum-outra_parcela) ;

        resp = min(resp,diferenca) ;
        return ;
    }

    // testamos com o elemento i
    sum+=lista[i] ;
    solve(i+1) ;

    // testamos sem o elemento i
    sum-=lista[i] ;
    solve(i+1) ;

}
