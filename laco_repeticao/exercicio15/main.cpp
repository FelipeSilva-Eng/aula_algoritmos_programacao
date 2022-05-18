// Faça um programa que solicita 20 valores inteiros e exiba quantos são pares e quantos são ímpares.

#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor, par=0, impar=0, cont;

    for (cont=1; cont <=5; cont++) {
        cout << "Digite o " << cont << "o. valor: " << endl;
        cin >> valor;

        if (valor % 2 == 0) {
            par++;
        } else {
            impar++;
        }
    }

    cout << "Valores impares: " << impar << endl;
    cout << "Valores pares: " << par << endl;

    return 0;
}