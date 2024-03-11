#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;

    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){

        if(s[i] == '1') cout << '0';
        else cout << '1';

        //Outra possibilidade:
        //1 - (s[i] - '0') transformamos o char s[i] no número equivalente ao seu dígito
        //2 - Usamos o comando de negação (!) para inverter o 0 para 1 e o 1 para 0. ! == not lógico 
        //
        //A resposta ficaria:
        //cout << !(s[i]-'0');

    }

}