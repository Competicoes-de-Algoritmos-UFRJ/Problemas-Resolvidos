//https://neps.academy/br/exercise/257 - Fibonacci

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int fibo(int x){
    if(x==0 || x==1) return 1;

    return fibo(x-1) + fibo(x-2);
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    cout << fibo(n) << endl;

    return 0;
}