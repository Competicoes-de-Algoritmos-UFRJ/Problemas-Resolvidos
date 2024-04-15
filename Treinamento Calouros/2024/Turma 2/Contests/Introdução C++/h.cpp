#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int d, t, s;

    cin >> d >> t >> s;

    if(t*s>=d){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}