#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int m, s;
        cin >> m >> s;

        vector<int> freq(50 + 1);

        int maior = 0;
        
        for(int i=0; i<m; i++){
            int x;
            cin >> x;

            freq[x]=1;
            
            maior = max(maior, x);
        }

        for(int i=1; i<=maior; i++){
            if(!freq[i]) s-=i;
        }

        int i = maior+1;
        while(s>0){
            s-=i;
            i++;
        }

        if(s!=0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }

    return 0;
}