#include<iostream>
using namespace std;

int main()
{
    int anos,meses,dias,totalDias;
    
    
    cout << "Conversor de idade em dias\n";
    cout << "Digite a idade que deseja converter\n";
    cout << "Anos: ";
    cin >> anos;
    cout << "\nMeses: ";
    cin >> meses;
    cout << "\nDias: ";
    cin >> dias;
    if (anos > 0 && meses > 0 && dias > 0 ) {
        
        totalDias = dias+meses*30+anos*365;
    
        cout << "\nSua idade em dias é: " << totalDias;
    } else {
        cout << "\nErro: Dados inseridos são negativos, ou inválidos .";
            }
    return 0;
}