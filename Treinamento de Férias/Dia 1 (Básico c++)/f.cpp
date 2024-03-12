#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n; cin >> n; //declaro e recebo o numero
    
    //peço perdão por essa questão, pois ela é enorme, precisa de um monte de if e else

    //para cada número possível, vamos falar qual o output específico pra ele

    if(n == 1)
    {
        cout << "one\n";
    }
    else if(n == 2)
    {
        cout << "two\n";
    }
    else if(n == 3)
    {
        cout << "three\n";
    }
    else if(n == 4)
    {
        cout << "four\n";
    }
    else if(n == 5)
    {
        cout << "five\n";
    }
    else if(n == 6)
    {
        cout << "six\n";
    }
    else if(n == 7)
    {
        cout << "seven\n";
    }
    else if(n == 8)
    {
        cout << "eight\n";
    }
    else if(n == 9)
    {
        cout << "nine\n";
    }
    else{
        cout << "Greater than 9\n";  // se nenhum dos valores anteriores for verdadeiro, o número é maior que 9, perceba que não tem o número 0 no problema
    }


    return 0;
}