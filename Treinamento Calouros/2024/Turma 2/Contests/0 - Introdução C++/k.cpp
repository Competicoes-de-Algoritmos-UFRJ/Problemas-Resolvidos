#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    if(b-a==1 || (a==1 && b==10)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}