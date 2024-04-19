//https://neps.academy/br/exercise/110 - Consecutivos

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    int resp = 0, atual = 0, last = 0;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;

        //checo o resp==0 para pegar o primeiro número da iteração, depois da primeira iteração resp deixará de ser 0
        if(x==last || resp==0){
            atual++;
        }else{
            atual = 1;
        }

        last = x;

        resp=max(resp, atual);
    }

    cout << resp << endl;

    return 0;
}