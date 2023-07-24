#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

int main(){
    fastio;
    int n, p, q;

    cin >> n >> p >> q;

    int menor=100005;

    for(int i=1; i<=n; i++){
        int prato;

        cin >> prato;

        menor=min(menor, prato);
    }
    if(p<menor+q){
        cout << p << endl;
    }else{
        cout << menor+q << endl;
    }
    return 0;
}
