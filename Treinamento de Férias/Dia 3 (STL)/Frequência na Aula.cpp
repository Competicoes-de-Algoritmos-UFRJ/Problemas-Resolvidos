#include <bits/stdc++.h>
using namespace std;

int main(){        
    int n; cin >> n;
    //Criamos um set para guardar os registros de cada aluno, porque pelas propriedades do set
    //cada registro aparecerá somente uma vez. Dessa forma, a quantidade de elementos final
    //será o número de alunos presentes.
    set <int> alunos;
    for(int i = 0; i < n; i++){
        int registro; cin >> registro;
        alunos.insert(registro);
    }
    cout << alunos.size();
    return 0;
}