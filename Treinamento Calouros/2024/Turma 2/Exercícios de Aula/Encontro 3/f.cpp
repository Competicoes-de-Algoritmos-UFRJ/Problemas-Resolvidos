//https://neps.academy/br/exercise/54 - Tacos de Bilhar

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int c;
    cin >> c;

    set<int> s;

    int resp = 0;

    for(int i=0; i<c; i++){
        int x;
        cin >> x;

        if(!s.count(x)){
            s.insert(x);
            resp+=2;
        }else{
            s.erase(x);
        }
    }

    cout << resp << endl;

    return 0;
}