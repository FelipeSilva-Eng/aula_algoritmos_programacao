///
// Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições 
// em que o índice de linha tem valor maior que o da coluna
///
#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 5

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[TAM][TAM], linha, coluna;

    for (linha=0; linha<TAM; linha++){
        for (coluna=0; coluna<TAM; coluna++){
            if (linha > coluna){
                matriz[linha][coluna] = 1;
            }else {
                matriz[linha][coluna] = 0;
            }
        }
    }

    cout << "" << endl;

    for (linha=0; linha<TAM; linha++){
        for (coluna=0; coluna<TAM; coluna++){
            cout << matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }

    return 0;
}