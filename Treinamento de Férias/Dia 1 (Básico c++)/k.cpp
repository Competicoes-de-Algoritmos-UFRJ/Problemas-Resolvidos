#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int x; cin >> x; //recebemos o numero
    int moedas_de_500 = x/500; // temos x/500 moedas de 500 (lembrando que o resto da divisão é jogado fora)
    int moedas_de_5 = (x- (500*moedas_de_500))/5; // a quantidade de moedas de 5 é a quantidade de dinheiro total menos a quantidade de dinheiro que pegamos nas moedas de 500, isso dividido por 5
    int resposta = 1000*moedas_de_500 + 5*moedas_de_5; // a resposta como pedido no enunciado
    cout << resposta << '\n';
}