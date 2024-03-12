#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    char primeiro, segundo, terceiro; cin >> primeiro >> segundo >> terceiro; //recebemos a string caractere por caractere, só temos trẽs afinal

    if(primeiro == '7' || segundo == '7' || terceiro == '7') // vamos ver se algum deles é igual à 7, perceba o uso do || (OU)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}