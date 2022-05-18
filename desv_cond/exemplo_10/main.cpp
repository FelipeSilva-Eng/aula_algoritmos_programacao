#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int lado1, lado2, lado3;

    cout << "Informe os 3 lados do triangulo: " << endl;
    cout << "1° lado: ";
    cin >> lado1;

    cout << "2° lado: ";
    cin >> lado2;

    cout << "3° lado: ";
    cin >> lado3;

    if (lado1 == lado2 and lado2 == lado3 and lado1 == lado3) {
        cout << "O triângulo é eqüilátero.";
    } else if (lado1 == lado2 or lado1 == lado3 or lado2 == lado3 or lado3 == lado1) {
            cout << "O triângulo é isósceles.";
            } else {
                cout << "O Triângulo é escaleno.";
                }


    return 0;
}