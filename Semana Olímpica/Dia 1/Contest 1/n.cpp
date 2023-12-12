#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int a, b, c, x, y;

        cin >> a >> b >> c >> x >> y;

        if(x>=a){
            x-=a;
            a=0;
        }else{
            x=0;
        }

        if(y>=b){
            y-=b;
            b=0;
        }else{
            y=0;
        }

        if(x+y<=c){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
