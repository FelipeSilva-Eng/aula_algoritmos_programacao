///
///Exercícios 1 - Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições.
///

#include <iostream>
using namespace std;
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    int minha_matriz[5][5], linha, coluna;

    // No primeiro loop gera as linhas, no loop interno gera as colunas.
    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++) {
            minha_matriz[linha][coluna] = 1;

        }
    }

    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++){
            cout << minha_matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }




    return 0;
}