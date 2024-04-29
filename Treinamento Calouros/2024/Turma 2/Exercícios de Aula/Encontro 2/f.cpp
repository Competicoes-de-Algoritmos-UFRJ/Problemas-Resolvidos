//https://neps.academy/br/exercise/292 - Apagando e Ganhando

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n, d;
    while(cin >> n >> d && n!=0 && d!=0){
        string ss;
        cin >> ss;
        
        int d_ = d;
        
        vector<int> pilha;
        for(int i=0; i<n; i++){
            int num = ss[i]-'0';
            
            while(!pilha.empty() && pilha.back()<num && d_){
                d_--;
                pilha.pop_back();
            }
            
            pilha.push_back(num);
        }

        for(int i=0; i<n-d; i++){
            cout << pilha[i];
        }
        cout << endl;
    }

    return 0;
}