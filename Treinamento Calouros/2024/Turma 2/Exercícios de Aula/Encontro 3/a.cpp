//https://neps.academy/br/exercise/176 - Ordenação Simples

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

    sort(v.begin(), v.end());

    for(int i:v){
        cout << i << ' ';
    }
    cout << endl;
    
    return 0;
}