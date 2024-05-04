#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    string s;

    cin >> n >> s;

    int maior = 0, atual = 0;

    for(int i=0; i<n; i++){
        if(s[i]=='o'){
            atual++;
        }else{
            maior = max(maior, atual);
            atual = 0;
        }
    }
    
    atual = 0;

    for(int i=n-1; i>=0; i--){
        if(s[i]=='o'){
            atual++;
        }else{
            maior = max(maior, atual);
            atual = 0;
        }
    }

    cout << (maior==0?-1:maior) << endl;
    
    return 0;
}