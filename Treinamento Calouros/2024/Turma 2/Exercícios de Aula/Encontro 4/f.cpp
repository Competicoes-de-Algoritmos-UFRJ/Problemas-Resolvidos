//https://neps.academy/br/exercise/810 - Altos e Baixos

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> prefix(n);

    for(int i=1; i<n; i++){
        char x;
        cin >> x;

        if(x=='A'){
            prefix[i]=prefix[i-1]+1;
        }else{
            prefix[i]=prefix[i-1]-1;
        }
    }

    int menor = 0;
    for(int i=1; i<n; i++){
        menor = min(menor, prefix[i]);
    }

    menor*=-1;

    for(int i=0; i<n; i++){
        cout << prefix[i]+menor << ' ';
    }

    return 0;
}