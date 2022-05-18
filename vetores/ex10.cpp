#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int meu_vetor[5], i;

    for (i=0; i<5; i++){
        cout << "Informe o valor para a " << i+1 << "° posição: " << endl;
        cin >> meu_vetor[i];
    }

    for (i=0; i<5; i++) {
        if (meu_vetor[i] == 7) {
            cout << "O número 7 foi encontrado na posição " << i+1 << endl;
        }
    }   

    return 0;
}