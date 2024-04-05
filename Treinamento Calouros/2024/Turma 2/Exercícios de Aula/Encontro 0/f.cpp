//https://neps.academy/br/exercise/86 - Aprovado ou Reprovado

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    double a, b;

    cin >> a >> b;

    double media = (a+b)/2;

    if(media>=7){
        cout << "Aprovado" << endl;
    }else if(media>=4){
        cout << "Recuperacao" << endl;
    }else{
        cout << "Reprovado" << endl;
    }

    return 0;
}