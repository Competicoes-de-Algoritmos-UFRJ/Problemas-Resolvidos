#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    //Vetor com os tipos de status do contest que serão nossas chaves no map
    vector<string> status = { "AC", "WA", "TLE", "RE"};

    //Map para contar quantas vezes cada resultado foi obtido
    map <string, int> contest;
    for(int i = 0; i < n ; i ++){
        string s; cin >> s;//Status

        //Chamo o map com o status sendo a chave e incremento 1. 
        contest[s]++; //Na primeira chamada, será criada a chave Si com o valor 0 e então somado 1;
    }
    for(int i = 0; i < 4; i++){
        //Para cada tipo de status imprimimos seu valor no map
        cout << status[i] << " x " << contest[status[i]] << '\n';
    }
    return 0;
}