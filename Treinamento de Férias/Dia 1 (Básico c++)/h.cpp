#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int x; cin >> x; //recebemos a temperatura

    if(x>=30)
    {
        cout << "Yes" << '\n'; // se for maior ou igual a 30, ligamos o ar condicionado
    }
    else
    {
        cout << "No" << '\n'; //senão, não ligamos
    } 
}