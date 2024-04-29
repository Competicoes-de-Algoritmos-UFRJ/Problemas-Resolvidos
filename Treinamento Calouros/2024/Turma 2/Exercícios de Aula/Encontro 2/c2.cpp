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

    int cont = 0;

    while(n--){
        string ss;
        getline(cin, ss);
        
        for(char i:ss){
            if(i=='{'){
                cont++;
            }else if(i=='}'){
                if(cont>0){
                    cont--;
                }else{
                    ans = 'N';
                }
            }
            
        }
    }

    if(cont>0) ans = 'N';

    cout << ans << endl;

    return 0;
}