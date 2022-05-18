#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int horas, minutos;

    cout << "Entre com um número para as horas: ";
    cin >> horas;

    cout << "Entre com um número para os minutos: ";
    cin >> minutos;

    if (horas >= 0 and horas <= 24) {
        if (minutos >=0 and minutos >= 59) {
            cout << "A hora é válida";
        }
    } else {
        cout << "A hora é inválida";
    }

    return 0;
}