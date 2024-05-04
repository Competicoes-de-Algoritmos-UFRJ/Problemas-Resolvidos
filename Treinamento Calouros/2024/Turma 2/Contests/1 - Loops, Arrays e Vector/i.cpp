#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<int> v;
 
        int maior = 0, seg_maior = 0;
 
        for(int i=0; i<n; i++){
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