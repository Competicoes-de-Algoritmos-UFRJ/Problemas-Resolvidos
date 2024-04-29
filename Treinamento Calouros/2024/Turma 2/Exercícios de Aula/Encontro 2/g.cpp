//https://neps.academy/br/exercise/337 - Torres de Hanói

//os pinos no procedimento não importam para gente, apenas a quantidade de discos 

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int hanoi(int x){
    if(x == 1){
        return 1;
    }

    return 2*hanoi(x-1) + 1;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, cont = 0;
    while(cin >> n && n!=0){
        cout << "Teste " << ++cont << endl;
        cout << hanoi(n) << endl << endl;
    }

    return 0;
}