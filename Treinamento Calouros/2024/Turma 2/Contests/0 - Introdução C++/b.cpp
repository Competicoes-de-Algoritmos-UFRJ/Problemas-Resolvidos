#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if(a+b+1<=9){
        cout << a+b+1 << endl;
    }else{
        cout << a+b-1 << endl;
    }

    return 0;
}