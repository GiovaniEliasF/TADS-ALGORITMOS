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
    
    totalDias = dias+meses*30+anos*365;
    
    cout << "Sua idade em dias é: " << totalDias;
    
    return 0;
}