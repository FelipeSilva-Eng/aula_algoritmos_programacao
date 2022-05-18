#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Entre com um número inteiro: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "O número é par";
    } else {
        cout << "O número é ímpar";
    }

    return 0;
}