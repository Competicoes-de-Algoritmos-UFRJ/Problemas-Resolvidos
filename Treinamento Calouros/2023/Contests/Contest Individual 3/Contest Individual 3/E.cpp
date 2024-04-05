#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

int t, n;

int main(){
    fastio;
    cin >> t;
    while(t--){
        cin >> n;

        vector<string> v(n);
        vector<vector<int> > freq(11, vector<int>(11));

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        long long resp=0;

        for(int i=0; i<n; i++){
            char a = v[i][0];
            char b = v[i][1];

            int pri = a-'a';
            int seg = b-'a';

            for(int j=0; j<=10; j++){
                if(j==seg) continue;

                resp+=freq[pri][j];
            }

            for(int j=0; j<=10; j++){
                if(j==pri) continue;

                resp+=freq[j][seg];
            }

            freq[pri][seg]++;
        }
        
        cout << resp << endl;
    }

    return 0;
}
