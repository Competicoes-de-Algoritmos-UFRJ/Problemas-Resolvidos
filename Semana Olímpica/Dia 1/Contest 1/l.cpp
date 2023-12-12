#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int v[n], called[n];

    for(int i=0; i<n; i++){
        cin >> v[i];

        called[i] = 0;
    }

    for(int i=0; i<n; i++){
        if(!called[i]){
            called[v[i]-1] = 1;
        }
    }

    int resp = 0;
    for(int i=0; i<n; i++){
        if(!called[i]){
            resp++;
        }
    }

    cout << resp << endl;
    
    for(int i=0; i<n; i++){
        if(!called[i]){
            cout << i+1 << ' ';
        }
    }

    cout << endl;

    return 0;
}
