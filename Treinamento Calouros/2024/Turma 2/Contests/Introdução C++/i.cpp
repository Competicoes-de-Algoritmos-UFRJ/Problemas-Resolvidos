#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    long long x;
    cin >> x;

    if(x>=0){
        if(x%10!=0) cout << x/10+1 << endl;
        else cout << x/10 << endl;
    }else{
        cout << x/10 << endl;
    }

    return 0;
}