#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    //Definição de variaveis
    int i, j, x=0;
    int matriz_a[4][6], matriz_b[6][4], matriz_c[6][4], aux=0;

    //preenche a matriz com valores
    for (i=0; i<4; i++){
        for (j=0; j<6; j++){
            matriz_a[i][j] = 3;
            matriz_b[i][j] = 2;
        }
    }



    //processamento e saida em tela = produto das matrizes a e b
    for (i=0; i<6; i++){
        for (j=0; j<4; j++){
            matriz_c[i][j] = 0;
            for (x=0; x < 6; x++){
                aux += matriz_a[i][x] * matriz_b[x][j];
            }
            matriz_c[i][j] = aux;
            aux = 0;
        }

    }

    //imprime as matrizes definidas
    for (i=0; i<4; i++){
        for (j=0; j<6; j++){
            cout << matriz_c[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}