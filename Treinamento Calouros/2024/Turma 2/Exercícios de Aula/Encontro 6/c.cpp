//https://neps.academy/br/exercise/64 - Arquivos

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    
    int n, b;
    cin >> n >> b;

    vector<int> v(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 0, j = n-1, resp = 0;

    while(i<=j){
        if(v[i] + v[j] <= b){
            i++, j--;
        }else{
            j--;
        }
        resp++;
    }

    cout << resp << endl;
    return 0;
}