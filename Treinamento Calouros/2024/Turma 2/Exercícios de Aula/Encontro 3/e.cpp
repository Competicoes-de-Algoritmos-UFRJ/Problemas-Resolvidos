//https://neps.academy/br/exercise/252 - Frequência na Aula

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> s;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    
    cout << s.size() << endl;

    return 0;
}