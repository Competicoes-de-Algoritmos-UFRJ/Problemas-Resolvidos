#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string s; cin >> s;
        vector<int> alfabeto(26, -1);

        bool resposta = true;

        for(int i = 0; i < n; i++){
            int index = s[i] - 'a';
            if(alfabeto[index] == -1){
                alfabeto[index] = i%2;
            }else{
                if(alfabeto[index] != i%2){
                    resposta = false;
                }
            }
        }

        if(resposta) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

}   