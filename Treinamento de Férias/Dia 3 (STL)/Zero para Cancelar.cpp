#include <bits/stdc++.h>
using namespace std;

int main(){ 

    int n, resp = 0;cin >> n;

   stack <int> seq;

   for(int i = 0; i < n; i ++){
       int x; cin >> x;
       if(x == 0) seq.pop(); //Caso seja 0, o último número estava errado e retiramos ele
       else seq.push(x); //Adicionamos o numero na pilha
    }

   //Somamos na resposta todos os números que sobraram na pilha
    int tamanho = seq.size();
    for(int i = 0; i < tamanho; i ++){
       resp += seq.top(); //Somamos o último
       seq.pop(); //E retiramos ele para pegar o próximo valor no outro loop
    }
    cout << resp;
    return 0;
}