#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        vector<int> v, v_sorted;

        for(int j=0; j<n; j++){
            int x;
            cin >> x;

            v.push_back(x);
            v_sorted.push_back(x);
        }

        sort(v_sorted.begin(), v_sorted.end());

        for(int i:v){
            if(i==v_sorted[n-1]){
                cout << i-v_sorted[n-2] << ' ';
            }else{
                cout << i-v_sorted[n-1] << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
