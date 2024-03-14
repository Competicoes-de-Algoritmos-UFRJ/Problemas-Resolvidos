#include <bits/stdc++.h>
using namespace std;

int main(){        
    int n, resp = 0; 
    cin >> n;
    
    set <int> estoque;
    //Para cada consulta
    for(int i = 0; i < n; i ++){
        int c; cin >> c; //Comprimento do taco 

        //Procuramos o tipo de taco no nosso estoque: find retorna um iterador 
         if(estoque.find(c) == estoque.end()){
            //Caso o elemento não exista, o iterador apotará para o final do set (estoque.end())
            estoque.insert(c); //Adicionamos o taco de compr. c no set
            resp+=2; //Somamos os dois novos tacos fabricados na resposta
        }
        else{
            //Caso exista, removemos o taco vendido do set
            estoque.erase(c);
        }
    }
    cout << resp;
    return 0;
}