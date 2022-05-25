#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numeros[10], i;

    for (i=0; i<10; i++) {
        cout << "Informe o valor da posição " << i+1 << endl;
        cin >> numeros[i];
    }

    
    for (i=10; i>=0; i--) {
        cout << numeros[i] << endl;
    }


    return 0;
}