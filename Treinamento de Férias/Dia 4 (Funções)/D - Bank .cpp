#include <bits/stdc++.h>
using namespace std ;

// funcoes usadas
void evento_1(int id, set<int> &pessoas) ;
void evento_2(int x, set<int> &pessoas) ;
void evento_3(vector<int> &outputs, set<int> &pessoas) ;

int main(){

    int id=1 ; // id eh a pessoa de menor id
    int n , q , tipo , x ; // n, q , tipo e x sao variaveis descritas no enunciado
    set<int> pessoas_ja_chamadas ; // set que guarda o id das pessoas que foram chamadas apenas uma vez 
    vector<int> outputs ; // guarda os id's das pessoas do evento 3

    cin >> n >> q ;

    for(int i=0 ; i<q ; i++){

        cin >> tipo ;

        switch(tipo){

            case 1 :
                // chamamos a pessoa de menor id e preparamos para chamar a proxima pessoa
                evento_1(id++,pessoas_ja_chamadas) ; 
            break ;

            case 2 :
                cin >> x ;
                // chamamos a pessoa de id x pela segunda vez
                evento_2(x,pessoas_ja_chamadas) ;
            break ;

            case 3 :
                // armazenamos o valor do id da pessoa de menor id q foi chamada somente uma vez
                evento_3(outputs,pessoas_ja_chamadas) ;
            break ;

        }

    }

    // printa as repostas
    for(int num : outputs) cout << num << endl ;

    return 0 ;

}

// as funcoes foram escritas simulando o descrito no enunciado
void evento_1(int id, set<int> &pessoas) { pessoas.insert(id) ; return ; }
void evento_2(int x, set<int> &pessoas) { pessoas.erase(x) ; return ; }
void evento_3(vector<int> &outputs, set<int> &pessoas) { outputs.push_back(*pessoas.begin()) ; return ; }
