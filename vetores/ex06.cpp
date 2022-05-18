#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int my_vector[3], i;
    int maior=0, menor=0;

    for (i=0; i<3; i++) {
        cout << "Informe o número para a " << i+1 << " °posição: ";
        cin >> my_vector[i];

        maior, menor = my_vector[0];

        if (my_vector[i] > maior) {
            maior = my_vector[i];
        } else if (my_vector[i] < menor) {
            menor = my_vector[i];
        }
    }

    for (i=1; maior > 1; maior--) {
        i = i * maior;
    }

    cout << "Fatorial do maior = " << i << endl;

    for (i=1; menor > 1; menor--) {
        i = i * menor;
    }

    cout << "Fatorial do menor = " << i << endl;

    return 0;
}