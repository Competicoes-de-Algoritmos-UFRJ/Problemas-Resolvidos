#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n,a,b; cin >> n >> a >> b; //recebo a quantidade de bolas, quantas retiraremos e quantas adicionaremos
    cout << n-a+b << '\n'; //retiramos a bolas e adicionamos b bolas
    return 0;
}