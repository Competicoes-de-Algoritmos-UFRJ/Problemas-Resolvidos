#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        string s;
        
        cin >> n >> s;

        int maior = 0;
        for(int j=0; j<n; j++){
            maior = max(maior, s[j]-'a'+1);
        }

        cout << maior << endl;
    }
    
    return 0;
}
