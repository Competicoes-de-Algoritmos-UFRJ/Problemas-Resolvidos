#include <bits/stdc++.h>

using namespace std;

int n, c[200005], r[200005];

//a função acha_maior é uma função que dada uma cor de parâmetro, ela acha a posição da pessoa que possui essa cor, e tem o maior rank
//se não houver pessoas com a cor a função retorna -1
int acha_maior(int cor){
    int maior = 0, pos = -1;

    for(int i=0; i<n; i++){
        if(c[i]==cor){ //se a pessoa tiver a cor que eu quero
            if(r[i]>maior){ //e se o rank dela for maior que o rank atual, então faço a atualização do maior, e da posição, onde está o maior
                maior = r[i];
                pos = i;
            }
        }
    }
    
    return pos;
}

int main(){

    int t;
    cin >> n >> t;

    for(int i=0; i<n; i++){
        cin >> c[i];
    }

    for(int i=0; i<n; i++){
        cin >> r[i];
    }
    
    int resp = acha_maior(t);

    if(resp!=-1){
        cout << resp+1 << endl;
    }else{ // se não houver pessoas com a cor t, então devemos procurar pela cor da primeira pessoa
        cout << acha_maior(c[0])+1 << endl;
    }

    return 0;
}
