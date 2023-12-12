#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        vector<int> v;

        int maior = 0, seg_maior = 0;

        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            v.push_back(x);

            if(x>maior){
                seg_maior = maior;
                maior = x;
            }else if(x>seg_maior){
                seg_maior = x;
            }
        }

        for(int i:v){
            if(i==maior){
                cout << i - seg_maior << ' ';
            }else{
                cout << i - maior << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
