#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    double d,t,s; cin >> d >> t >> s; //perceba que usamos double, pois, ao realizar as contas podemos achar um resultado decimal, por exemplo, 10.2 horas, caso esses valores fossem inteiros, o computador entenderia como 10 horas, e nós não conseguiriamos resolver o problema
    if(d/s <= t) // distancia/velocidade = tempo, caso o tempo que ele levar para chegar no local for menor ou igual ao tempo que esperamos que ele chegue, GG
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}