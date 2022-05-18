#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    do {
        cout << "Digite um número inteiro: " << endl;
        cin >> numero; 

        if (numero < 0) {
            cout << "Número inválido, tente novamente." << endl;
        }

    } while (numero < 0);

    cout << "Número válido";

    return 0;
}