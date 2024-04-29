//https://cses.fi/problemset/task/2165/ - Tower of Hanoi

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

vector<pair<int, int> > ans;

void hanoi(int x, int orig, int temp, int dest){
    if(x == 1){
        ans.push_back({orig, dest}); //quando eu tenho um disco só preciso passar ele do disco de origem para o destino
        return;
    }

    hanoi(x-1, orig, dest, temp); //quero passar os discos que estão na origem para o temporário

    ans.push_back({orig, dest}); //passo o disco que está no final da origem para o destino

    hanoi(x-1, temp, orig, dest); //quero passar os disco que estão no temporário para o destino

    return;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    int n;
    cin >> n;

    hanoi(n, 1, 2, 3);

    cout << ans.size() << endl;

    for(pair<int, int> i: ans){
        cout << i.first << ' ' << i.second << endl;
    }

    return 0;
}