#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    //o vetor called irá guardar a informação se a pessoa i foi chamada ou não, se called[i] for igual a 1, isso quer dizer que a pessoa i foi chamada, caso contrário não
    int v[n], called[n];

    for(int i=0; i<n; i++){
        cin >> v[i];

        called[i] = 0; //inicializo todas as posições do called como 0, pois nenhuma pessoa foi chamada ainda
    }

    for(int i=0; i<n; i++){
        if(!called[i]){ //se a pessoa atual não foi chamada, então ela precisa chamar outra pessoa
            called[v[i]-1] = 1;
        }
    }

    int resp = 0;
    for(int i=0; i<n; i++){
        if(!called[i]){
            resp++;
        }
    }

    cout << resp << endl;
    
    for(int i=0; i<n; i++){
        if(!called[i]){
            cout << i+1 << ' ';
        }
    }

    cout << endl;

    return 0;
}
