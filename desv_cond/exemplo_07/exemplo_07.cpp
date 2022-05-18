#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    cout << "Digite um número inteiro: ";
    cin >> numero;

    if (numero =! 0) {
        if (numero > 0) {
            cout << "Ele é positivo";
        } else {
            cout << "Ele é negativo";
        }
    } else {
        cout << "Ele é igual a 0";
    }

    return 0;
}