#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int ma[105][105];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int h, w;
    cin >> h >> w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> ma[i][j];
        }
    }

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(ma[i][j]==0){
                cout << '.';
            }else{
                cout << char('A' + ma[i][j] - 1);
            }
        }
        cout << endl;
    }

    return 0;
}