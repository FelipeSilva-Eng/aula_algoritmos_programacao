#include <iostream>
using namespace std;

#include <locale.h>

#define TAM1 4
#define TAM2 6

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz_a[TAM1][TAM2]={2}, matriz_b[TAM2][TAM2]={2}, linha, coluna;

    for (linha=0; linha<TAM; linha++){// imprime na tela a soma da linha
        for (coluna=0; coluna<TAM; coluna++){
            cout << matriz_a[linha][coluna]  << "\t";
        }
        cout << endl;
    }

    return 0;
}