#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
 
    while(t--){
        int n;
        string s;
 
        cin >> n >> s;
        
        int bit[26];
 
        //quero mapear as letras do alfabeto em 0 ou 1
        //inicialmente mapeio como -1, para indicar que a letra ainda não foi mapeada
        for(int j=0; j<26; j++){
            bit[j]=-1;
        }
 
        int last = 0;
 
        bool achei = false;
 
        for(int j=0; j<n; j++){
            if(bit[s[j]-'a']==-1){ //se a letra não foi mapeada ainda
 
                //defino ela como diferente do bit que está antes de mim
                //se last(ou seja, o bit anterior) for 0, então teremos !0 que dará 1, e se for 1, vai ser !1, que vai dar 0
 
                bit[s[j]-'a'] = !last;
 
            }else{ //se a letra não foi mapeada ainda, a única coisa que podemos fazer é checar se ela é diferente da anterior, se não for é impossível
                if(bit[s[j]-'a']==last){
                    cout << "NO" << endl;
                    achei = true;
                    break;
                }
            }
 
            last = bit[s[j]-'a'];
        }
 
        if(achei==false){
            cout << "YES" << endl;
        }
    }

    return 0;
}