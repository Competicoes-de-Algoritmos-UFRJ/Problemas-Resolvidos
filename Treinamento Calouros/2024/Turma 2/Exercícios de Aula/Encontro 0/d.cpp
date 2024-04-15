//https://neps.academy/br/exercise/13 - Bondinho

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int a, m;

    cin >> a >> m;

    if(a+m>50){
        cout << 'N' << endl;
    }else{
        cout << 'S' << endl;
    }

    return 0;
}