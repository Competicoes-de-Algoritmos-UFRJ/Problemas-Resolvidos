#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
 
    while(t--){
        int n, d;
        string s;
 
        cin >> n >> d >> s;
 
        int pos = n;
 
        for(int j=0; j<n; j++){
            if(s[j]-'0'<d){
                pos = j;
                break;
            }
        }
 
        for(int j=0; j<pos; j++){
            cout << s[j];
        }

        cout << d;
        
        for(int j=pos; j<n; j++){
            cout << s[j];
        }
        cout << endl;
    }

    return 0;
}