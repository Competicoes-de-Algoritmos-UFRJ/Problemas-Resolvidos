#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, s, r;

        cin >> n >> s >> r;

        vector<int> resp;

        int maior = s - r;

        int div = r / (n-1);
        int resto = r % (n-1);

        for(int i=0; i<n-1; i++){
            resp.push_back(div);
        }

        for(int i=0; i<n-1; i++){
            int aumento = maior - resp[i];

            if(aumento>=resto){
                resp[i] += resto;
                resto = 0;
            }else{
                resp[i] = maior;
                resto -= aumento;
            }
        }

        resp.push_back(maior);

        for(int i:resp){
            cout << i << ' ';
        }
        cout << endl;
    }

    return 0;
}