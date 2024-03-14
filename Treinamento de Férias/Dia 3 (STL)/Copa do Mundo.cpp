#include <bits/stdc++.h>
using namespace std;

int main(){  
    
    //Criamos uma fila com todos os times: De 'A' a 'P'      
    queue <char> times;
    for(char i = 'A'; i < 'Q'; i++){
        times.push(i);
    }

    //Vamos analizar jogo por jogo, olhando os caracters de dois em dois
    //O time ganhador vai pro final da fila e o perdedor é descartado
    for(int i = 0; i < 15; i++){
        int t1,t2; cin >> t1 >> t2;//Pontuações

        if(t1 > t2){
            times.push(times.front()); //T1 pro final da fila
            times.pop(); //Retiramos o T1
        }
        else {
            times.pop(); //Retiramos o T1
            times.push(times.front()); //T2 pro final da fila
        }
        times.pop(); //Retiramos o T2
    }

    //Após os loops, o time que sobrar será o ganhador
    cout << times.front();
    return 0;
}
