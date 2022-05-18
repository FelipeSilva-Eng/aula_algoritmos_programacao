#include <iostream>
using namespace std;

#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Informe um número inteiro: ";
    cin >> numero;

    if (numero >= 0) {
        cout << "O número informado foi: " << numero;
    } else {
        numero = numero * (-1);
        cout << "O número digitado foi convertido para positivo: " << numero;
    }


    return 0;
}