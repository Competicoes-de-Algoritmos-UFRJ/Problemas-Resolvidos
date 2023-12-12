#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
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
