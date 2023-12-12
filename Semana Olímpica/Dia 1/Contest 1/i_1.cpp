#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        vector<int> v;

        //para esse problema precisamos saber quem é o maior valor e o segundo maior valor
        int maior = 0, seg_maior = 0;

        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            v.push_back(x);

            if(x>maior){ // se x é maior que o maior valor até o momento, então o maior se torna o segundo maior, e x se torna o maior
                seg_maior = maior;
                maior = x;
            }else if(x>seg_maior){ //se x não for maior que o maior valor até o momento, mas foi maior que o segundo maior, então ele se torna o segundo maior
                seg_maior = x;
            }
        }

        for(int i:v){
            if(i==maior){ //se o número atual for igual ao maior valor, então devo fazer a diferença com o segundo maior valor
                cout << i - seg_maior << ' ';
            }else{
                cout << i - maior << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
