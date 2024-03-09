#include <bits/stdc++.h>
using namespace std ;

// funcoes usadas
int solve(string &x , string &s) ;
bool check(string &x , string &s) ;

int main(){
    int t , n , m ;
    string x , s ;
    vector<int> respostas ;

    cin >> t ;

    respostas.resize(t) ;

    for(int i=0 ; i<t ; i++){
        x.clear() ;
        s.clear() ;

        cin >> n >> m ;

        x.resize(n) ;
        s.resize(m) ;

        for(int j=0 ; j<n ; j++) cin >> x[j] ;
        for(int j=0 ; j<m ; j++) cin >> s[j] ;

        respostas[i] = solve(x,s) ;
    }

    for(int i=0 ; i<t ; i++) cout << respostas[i] << endl ;

    return 0 ;
}

int solve(string &x , string &s){

    const int n=x.size() ;

    int cont=0 ;
    while(x.size()<=2*n*s.size()){
        if(check(x,s)) return cont ;
        x+=x ;
        cont++ ;
    }

    return -1 ;
}

bool check(string &x , string &s){
    
    const int n=x.size() , m=s.size() ;

    for(int i=0 ; i<=n-m ; i++){
        if(x.substr(i,m)==s) return true ;
    }

    return false ;
}
