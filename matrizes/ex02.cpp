///
/// Faça um programa que preencha uma matriz de 5X5 com o elemento um em todas as posições em que o índice de linha tem valor igual ao da coluna.
///


#include <iostream>
using namespace std;

#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    int minha_matriz[5][5], linha, coluna;

    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++){
            if (linha == coluna) {
                //cout << "[" << linha << "]" << "[" << coluna << "]";
                minha_matriz[linha][coluna] = 1;
            } else {
                minha_matriz[linha][coluna] = 0;
            }
        }
    }

    // imprime a matriz na tela
    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++){
            cout << minha_matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }



    return 0;
}