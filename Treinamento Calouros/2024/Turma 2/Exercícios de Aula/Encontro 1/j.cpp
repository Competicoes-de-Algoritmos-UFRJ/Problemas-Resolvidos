//https://neps.academy/br/exercise/189 - Contagem de Algarismos

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int freq[10];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string a;

        cin >> a;

        for(char j:a){
            freq[j - '0']++;
        }
    }
    
    for(int i=0; i<10; i++){
        cout << i << " - " << freq[i] << endl;
    }

    return 0;
}