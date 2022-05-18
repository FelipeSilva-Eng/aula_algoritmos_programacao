#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int meu_vetor[10], i, menor=1, maior=1;
    float soma=0;

    for (i=0; i<10; i++) {
        cout << "Informe o " << i + 1 << "o número: " << endl;
        cin >> meu_vetor[i];


        if (meu_vetor[i] < menor) {
            menor = meu_vetor[i];
        } else if (meu_vetor[i] > maior) {
            maior = meu_vetor[i];
        }
        soma += meu_vetor[i];
    }

    cout << "MENOR= " << menor << endl;
    cout << "MAIOR= " << maior << endl;
    cout << "MEDIA= " << soma/i << endl;

    return 0;
}