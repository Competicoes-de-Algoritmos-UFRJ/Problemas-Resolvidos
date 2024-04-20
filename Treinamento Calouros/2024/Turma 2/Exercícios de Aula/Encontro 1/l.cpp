//https://neps.academy/br/exercise/1083 - Garamana

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int freq1[26], freq2[26];

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);

    string a, b;

    cin >> a >> b;

    for(char i:a){
        freq1[i - 'a']++;
    }

    int aste = 0;
    
    for(char i:b){
        if(i!='*') freq2[i - 'a']++;
        else aste++;
    }

    int need = 0;

    for(char i = 'a'; i<='z'; i++){
        int fa = freq1[i - 'a'];

        int fb = freq2[i - 'a'];

        if(fb>fa){
            cout << 'N' << endl;
            return 0;
        }

        if(fb<fa){
            need += fa - fb;
        }

    }

    if(need == aste){
        cout << 'S' << endl;
    }else{
        cout << 'N' << endl;
    }

    return 0;
}