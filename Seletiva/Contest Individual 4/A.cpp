#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'



int main(){
    fastio;
    int n, m, h, k;
    string moves;


    cin >> n >> m >> h >> k >> moves;

    set<pair<int, int> > s;

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;

        s.insert({a, b});
    }

    int pos=0, x=0, y=0, vida=h;

    while(pos<n){
        if(moves[pos]=='R'){
            x++;
        }
        if(moves[pos]=='L'){
            x--;
        }
        if(moves[pos]=='U'){
            y++;
        }
        if(moves[pos]=='D'){
            y--;
        }
        
        vida--;
        if(vida<0) break;

        if(s.count({x, y})){
            if(vida<k) vida=k, s.erase({x, y});
        }
        pos++;
    }
    if(pos==n){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}
