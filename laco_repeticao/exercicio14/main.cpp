#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int peso, maior, menor;
    int i;

    for (i=1; i <= 5; i++) {
        cout << "Informe o peso da " << i << " o. pessoa: ";
        cin >> peso;

        if (i == 1) {
            maior = peso;
            menor = peso;
        }
        if (peso > maior) {
            maior = peso;
        }
        if (peso < menor ) {
            menor = peso;
        }

    }

    cout << "Menor peso: " << menor << endl;
    cout << "Maior peso: " << maior << endl;

    return 0;
}