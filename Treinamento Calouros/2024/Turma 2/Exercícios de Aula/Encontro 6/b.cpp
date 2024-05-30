//https://neps.academy/br/exercise/892 - Escher

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n;
    cin >> n;

    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int i = 0, j = n-1;

    int soma = v[i] + v[j];

    while(i<=j){
        if(v[i] + v[j] != soma){
            cout << 'N' << endl;
            return 0;
        }
        i++, j--;
    }

    cout << 'S' << endl;
    return 0;
}