#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'



int main(){
    fastio;
    long long a, b;

    cin >> a >> b;

    cout << (a+b-1)/b << endl;

    return 0;
}
