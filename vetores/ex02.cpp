#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float notas[10], soma=0;
    int i;
    float media=0;

    for (i=0; i<10; i++) {
        cout << "Informe a " << i + 1 << "o número: " << endl;
        cin >> notas[i];

        soma += notas[i];
    }

    media = soma / i;
    soma = 0;

    for(i=0; i<10; i++) {
        if(notas[i] > media) {
            soma++; 
        }
    }

    cout << "A média da turma foi de: " << media << endl;
    cout << soma << " pessoas tiraram notas maior que a média" << endl;


    return 0;
}