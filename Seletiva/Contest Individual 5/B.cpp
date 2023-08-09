#include "bits/stdc++.h"

using namespace std;

#define endl '\n'
typedef long long ll;
typedef long double ld;
const int mxn = 1e5;

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    ld x1,y1,r1,x2,y2,r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

    // ld dx1, dy1, dx2, dy2;

    ld d = sqrt( abs(x2-x1) * abs(x2-x1) + abs(y2-y1) * abs(y2-y1) );

    ld v1 = abs(x1-x2)/d*r1;

    ld v2 = abs(x1-x2)/d*r2;

    if(x1 > x2) {
        x1 -= v1;
        x2 += v2; 
    }else{
        x1 += v1;
        x2 -= v2;
    }

    v1 = abs(y1-y2)/d*r1;

    v2 = abs(y1-y2)/d*r2;

    if(y1 > y2) {
        y1 -= v1;
        y2 += v2; 
    }else{
        y1 += v1;
        y2 -= v2;
    }

    ld dd = sqrt( abs(x2-x1) * abs(x2-x1) + abs(y2-y1) * abs(y2-y1) );
    
    v1 = abs(x1-x2)/dd*(dd/2);

    if(x1 > x2) {
        x1 -= v1;
    }else{
        x1 += v1;
    }

    v1 = abs(y1-y2)/dd*(dd/2);

    if(y1 > y2) {
        y1 -= v1;
    }else{
        y1 += v1;
    }

    cout << fixed << setprecision(12) << x1 << ' ' << y1 << ' ' << dd/2 << endl;

    return 0;
}
