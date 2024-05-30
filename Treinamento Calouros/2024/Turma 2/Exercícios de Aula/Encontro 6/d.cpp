//https://neps.academy/br/exercise/1725 - Lista palíndroma

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

    int i = 0, j = n-1, resp = 0;

    while(i<j){
        if(v[i] == v[j]){
            i++, j--;
        }else if(v[i]<v[j]){
            resp++;
            v[i+1]+=v[i];
            i++;
        }else{
            resp++;
            v[j-1]+=v[j];
            j--;
        }
    }

    cout << resp << endl;
    return 0;
}