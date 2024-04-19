//https://neps.academy/br/exercise/1486 - Zero para Cancelar

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        if(x>0) v.push_back(x);
        else v.pop_back();
    }

    int soma = 0;
    for(int i:v){
        soma+=i;
    }
    cout << soma << endl;
    return 0;
}