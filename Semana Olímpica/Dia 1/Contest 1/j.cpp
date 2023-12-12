#include <bits/stdc++.h>

using namespace std;

int n, c[200005], r[200005];

int acha_maior(int cor){
    int maior = 0, pos = -1;

    for(int i=0; i<n; i++){
        if(c[i]==cor){
            if(r[i]>maior){
                maior = r[i];
                pos = i;
            }
        }
    }
    return pos;
}

int main(){

    int t;
    cin >> n >> t;

    for(int i=0; i<n; i++){
        cin >> c[i];
    }

    for(int i=0; i<n; i++){
        cin >> r[i];
    }
    
    int resp = acha_maior(t);

    if(resp!=-1){
        cout << resp+1 << endl;
    }else{
        cout << acha_maior(c[0])+1 << endl;
    }

    return 0;
}
