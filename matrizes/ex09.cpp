#include <iostream>
using namespace std;
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //gera a partir da hora do sistema

    int matriz[5][5] = {0}, coluna, linha, soma=0;

    //coloca valores aleatórios na matriz
    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++){
            matriz[linha][coluna] = rand()%20; // gera númers aleatorios de 0 ate 19
        }
    }

    // Soma todos os elementos da matriz
    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++){
            soma += matriz[linha][coluna];
        }
    }

    // mostra a matriz
    for (linha=0; linha<5; linha++){
        for (coluna=0; coluna<5; coluna++){
            cout << matriz[linha][coluna] << "\t";
        }
        cout << endl;
    }

    cout << soma;

    return 0;
}