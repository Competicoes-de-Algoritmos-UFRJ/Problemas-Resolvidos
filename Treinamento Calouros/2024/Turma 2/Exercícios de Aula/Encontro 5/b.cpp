//https://neps.academy/br/exercise/261 - Ogros

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

const int mxn = 1e5+5;

int n, m, forca[mxn], pont[mxn];

// vamos buscar pela primeira posição no vetor forca que é maior x
int busca(int x){
    int l = 1, r = n-1, pos = n;

    while(l<=r){
        int mid = (l+r)/2;

        if(forca[mid]>x){
            pos = mid;
            r = mid-1;
        }else{
            l = mid+1;
        }
    }
    
    // agora pos guarda a primeira posição no forca maior que x, logo x se encaixa na faixa anterior a pos
    return pont[pos-1];
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    cin >> n >> m;

    for(int i=1; i<n; i++){
        cin >> forca[i];
    }

    for(int i=0; i<n; i++){
        cin >> pont[i];
    }

    for(int i=0; i<m; i++){
        int x;
        cin >> x;

        cout << busca(x) << ' ';
    }
    cout << endl;

    return 0;
}