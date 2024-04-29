//https://neps.academy/br/exercise/276 - Copa do Mundo (OBI 2010)

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    queue<char> fila;

    for(char i='A'; i<='P'; i++){
        fila.push(i);
    }

    for(int i=0; i<15; i++){
        int a, b;
        cin >> a >> b;

        char pri = fila.front();
        fila.pop();
        char seg = fila.front();
        fila.pop();

        if(a>b){
            fila.push(pri);
        }else{
            fila.push(seg);
        }
    }

    cout << fila.front() << endl;
    return 0;
}