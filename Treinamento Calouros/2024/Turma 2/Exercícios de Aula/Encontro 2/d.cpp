//https://neps.academy/br/exercise/271 - Expressões

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        string ss;
        cin >> ss;

        vector<char> pilha;

        char ans = 'S';

        for(char i:ss){
            
            if(i=='{' || i=='[' || i=='('){
                pilha.push_back(i);
            }else{
                char agr = '0';

                if(!pilha.empty()){
                    agr = pilha.back();
                }

                if((i=='}' && agr=='{') || (i==']' && agr=='[') || (i==')' && agr=='(')){
                    pilha.pop_back();
                }else{
                    ans = 'N';
                }
            }
            
        }

        if(pilha.size()>0) ans = 'N';

        cout << ans << endl;
    }

    return 0;
}