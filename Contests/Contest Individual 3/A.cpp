#include <bits/stdc++.h>

using namespace std;

int t;

int main(){
    cin >> t;
    while(t--){
        int x;
        cin >> x;

        cout << "Division ";
        
        if(x<=1399){
            cout << 4 << endl;
        }else if(x<=1599){
            cout << 3 << endl;
        }else if(x<=1899){
            cout << 2 << endl;
        }else{
            cout << 1 << endl;
        }
    }
    return 0;
}
