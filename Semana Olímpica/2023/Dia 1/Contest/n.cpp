#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a, b, c, x, y;

        cin >> a >> b >> c >> x >> y;

        if(x>=a){ //se o número de cachorros, for maior que o número de rações para cachorros, então diminuo o número de cachorros pelo número de rações
            x-=a;
        }else{ //caso contrário, consigo alimentar todos os cachorros com as rações específicas
            x=0;
        }

        // o if de cima, poderia ser substituído por x = max(0, x - a);

        if(y>=b){ //se o número de gatos, for maior que o número de rações para gatos, então diminuo o número de gatos pelo número de rações
            y-=b;
        }else //caso contrário, consigo alimentar todos os gatos com as rações específicas
            y=0;
        }

        // o if de cima, poderia ser substituído por y = max(0, y - b);

        if(x+y<=c){ //se o número de cachorros mais o número de gatos que sobrar for menor ou igual ao número de rações gerais, então é possível
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
