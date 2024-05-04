//https://neps.academy/br/exercise/278 - Troca de Cartas

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    set<int> sa, sb;
    for(int i=0; i<a; i++){
        int x;
        cin >> x;
        sa.insert(x);
    }

    for(int i=0; i<b; i++){
        int x;
        cin >> x;
        sb.insert(x);
    }

    int ntemnoa=0, ntemnob=0;

    for(int i:sa){
        if(!sb.count(i)) ntemnob++;
    }

    for(int i:sb){
        if(!sa.count(i)) ntemnoa++;
    }

    cout << min(ntemnoa, ntemnob) << endl;

    return 0;
}