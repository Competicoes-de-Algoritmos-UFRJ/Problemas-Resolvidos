#include <bits/stdc++.h>

using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define endl '\n'

int main(){
    fastio;
    int n, m;

    cin >> n >> m;

    vector<int> p(n), c(n);
    vector<vector<int> > f(n);

    for(int i=0; i<n; i++){
        cin >> p[i] >> c[i];

        f[i].resize(c[i]);

        for(int j=0; j<c[i]; j++){
            cin >> f[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;

            int final_pos=0;

            if(p[i]>=p[j]){
                vector<int> freq(m+1);
                int pos=1;

                for(int k=0; k<c[j]; k++){
                    freq[f[j][k]]++;
                }

                for(int k=0; k<c[i]; k++){
                    if(freq[f[i][k]]==0) pos=0;
                }

                if(pos==1){
                    if(p[i]>p[j] || c[j]>c[i]){
                        final_pos=1;
                    }
                }
            }

            if(final_pos==1){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}
