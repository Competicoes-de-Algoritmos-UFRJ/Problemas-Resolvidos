#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0; i<t; i++){
        int n;
        cin >> n;

        //para esse problema, precisamos saber quem é o maior valor da sequência e quem é o segundo maior
        //para isso, irei ordenar os valores de forma crescente e pegar o último e penúltimo valor   
        vector<int> v, v_sorted;

        for(int j=0; j<n; j++){
            int x;
            cin >> x;

            v.push_back(x);
            v_sorted.push_back(x);
        }

        sort(v_sorted.begin(), v_sorted.end());

        for(int i:v){
            if(i==v_sorted[n-1]){ //se o valor atual é igual ao maior valor, então devo fazer a diferença com o segundo maior
                cout << i-v_sorted[n-2] << ' ';
            }else{
                cout << i-v_sorted[n-1] << ' ';
            }
        }

        cout << endl;
    }

    return 0;
}
