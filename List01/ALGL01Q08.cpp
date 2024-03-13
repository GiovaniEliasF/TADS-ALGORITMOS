/*
Algoritmos e Programacão
Lista 01 - Questão 08
"Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter. "
*/

#include <iostream>
using namespace std;

int main() {
    
    float reais, dolar;
    float cotacaoDolar;
    
    cout << "Calculadora de conversão de R$ para US$." << endl ;
    cout << "Digite o valor de R$ que deseja converter para US$: R$";
    cin >> reais;
    cout << "Digite o valor da Cotação do Dólar em Reais: R$";
    cin >> cotacaoDolar;
    
    dolar = reais*cotacaoDolar;
    
    
    cout << endl << "R$" << reais << " equivale a US$" << dolar;
    
    
    return 0;
}



