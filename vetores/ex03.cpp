#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numeros[5], i;
    int maior=0, menor=0, igual=0;

    for (i=0; i<5; i++) {
        cout << "Informe o valor para a posição " << i + 1 << endl;
        cin >> numeros[i];

        maior, menor, igual = numeros[0];

        if (numeros[i] > numeros[0]) {
            maior++;
        } else if (numeros[i] < numeros[0]) {
            menor++;
        } else {
            igual++;
        }
    }

    cout << "MAIOR= " << maior << endl;
    cout << "MENOR= " << menor << endl;
    cout << "IGUAL= " << igual << endl;

    return 0;
}