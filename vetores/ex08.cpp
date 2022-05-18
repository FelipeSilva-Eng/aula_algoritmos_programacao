#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor_numeros[5], i, valor=0;
    int vetor_pares[5], vetor_impares[5];

    vetor_numeros[0] = 13;

    cout << vetor_numeros[0];

/*
    for (i=0; i<5; i++) {
        cout << "Informe o " << i+1 << "° valor: ";
        cin >> valor;

    cout << "pares => " << vetor_pares[0] << endl; 
    cout << "Imapres => " << vetor_impares[0] << endl; 
**/

    return 0;
}