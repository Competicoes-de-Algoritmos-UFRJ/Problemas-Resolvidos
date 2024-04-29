//https://neps.academy/br/exercise/56 - Chaves

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;
    cin.ignore();

    vector<char> pilha;

    char ans = 'S';

    while(n--){
        string ss;
        getline(cin, ss);
        
        for(char i:ss){
            if(i=='{'){
                pilha.push_back(i);
            }else if(i=='}'){
                if(!pilha.empty()){
                    pilha.pop_back();
                }else{
                    ans = 'N';
                }
            }
            
        }
    }

    if(pilha.size()) ans = 'N';

    cout << ans << endl;

    return 0;
}