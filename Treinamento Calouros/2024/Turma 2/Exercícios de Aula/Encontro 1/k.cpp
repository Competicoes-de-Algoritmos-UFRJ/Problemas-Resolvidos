//https://neps.academy/br/exercise/1487 - Cifra da Nlogônia

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    string p;
    cin >> p;

    string resp = "";

    string vogais = "aeiou";

    for(char i:p){
        bool vogal = 0;
        
        for(char j:vogais){
            if(i==j){
                vogal = 1;
                break;
            }
        }

        resp.push_back(i);

        if(!vogal){
            int menor = 26;
            char perto;

            for(char j:vogais){
                if(abs(i-j)<menor){
                    menor = abs(i-j);
                    perto = j;
                }
            }
            
            resp.push_back(perto);

            if(i == 'z'){
                resp.push_back(i);
            }else{
                char prox = i + 1;
                if(prox == 'w' || prox == 'y') prox++; // w e y não estão no alfabeto do enunciado XD

                for(char j:vogais){
                    if(prox==j){
                        vogal = 1;
                        break;
                    }
                }

                if(vogal){
                    resp.push_back(prox+1);
                }else{
                    resp.push_back(prox);
                }
            }
        }
    }

    cout << resp << endl;

    return 0;
}