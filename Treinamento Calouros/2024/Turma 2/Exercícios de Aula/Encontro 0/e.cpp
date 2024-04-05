//https://neps.academy/br/exercise/260 - Gangorra

#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int p1, c1, p2, c2;

    cin >> p1 >> c1 >> p2 >> c2;

    if(p1*c1 == p2*c2){
        cout << 0 << endl;
    }else if(p1*c1 > p2*c2){
        cout << -1 << endl;
    }else{
        cout << 1 << endl;
    }

    return 0;
}