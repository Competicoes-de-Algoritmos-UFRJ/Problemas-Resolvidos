//https://neps.academy/br/exercise/52 - Lâmpadas

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;

    cin >> n;

    int a = 0 , b = 0;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        if(x==1){
            a = !a;
        }else{ // x==2
            a = !a;
            b = !b;
        }
    }
    cout << a << endl << b << endl;

    return 0;
}