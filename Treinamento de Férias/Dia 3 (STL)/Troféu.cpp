#include <bits/stdc++.h>
using namespace std;

int main(){
    //Vetor com as pontuações
    vector<int> pontos;
    for(int i = 0; i < 5; i ++){
        int p; cin >> p;
        pontos.push_back(p);
    }

    //Ordenar
    sort(pontos.begin(), pontos.end());
    int trofeu = 0 ; int placa = 0;

    //Se o primeiro e ultimo elemento forem iguais, todos tiveram a mesma pontuação
    if(pontos[0] == pontos[4]) trofeu = 5;
    else{
        //Percorro o vector contando quantos elementos exitem da maior pontuação
        int primeiro = pontos[4];
        int atual = 4;
        while(pontos[atual] == primeiro){
            trofeu++; atual--;
        }
        //Continuamos a pecorrer, agora contando quantos elementos exitem da segunda maior pontuação
        int segundo = pontos[atual];
        while(pontos[atual] == segundo){
            placa++; atual--;
        }
    }
    cout << trofeu << " " << placa;
    return 0;
}