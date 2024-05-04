#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    double resp = 1.0*a*b/100;

    cout << fixed << setprecision(8) << resp << endl;

    return 0;
}