#include <bits/stdc++.h>
using namespace std;
#define fastio cin.tie(nullptr), ios_base::sync_with_stdio(false)


int main(){
    fastio;

    int h, w; cin >> h >> w; 

    int temp_var;

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            cin >> temp_var;
            if(temp_var == 0) cout << '.';
            else cout << (char) (temp_var - 1  + 'A');
        }
        cout << endl;
    }
}