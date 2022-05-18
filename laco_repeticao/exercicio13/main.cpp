#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero, menor;
    int i;

    for (i=1; i <= 3; i++) {
        cout << "Digite o " << i << " o. número: " << endl;
        cin >> numero;

        if (i == 1) {
            menor = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }

    cout << "O menor número digitado foi: " << menor << endl;

    return 0;
}