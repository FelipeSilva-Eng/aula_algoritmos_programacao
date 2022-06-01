#include <iostream>
using namespace std;
#include <time.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int matriz_a[3][5]={0}, matriz_b[3][5]={0}, matriz_c[3][5]={0}, linha, coluna, soma;

    // ler uma matriz a e b
    for (linha=0; linha<3; linha++){
        for (coluna=0; coluna<5; coluna++){
            matriz_a[linha][coluna] = rand()%20;
            matriz_b[linha][coluna] = rand()%20;
        }
    }

    // gera matriz c com a soma dos elementos
    for (linha=0; linha<3; linha++){
        for (coluna=0; coluna<5; coluna++){
            matriz_c[linha][coluna] = matriz_a[linha][coluna] + matriz_b[linha][coluna];
        }
    }

    //imprime toda a matriz c
    for (linha=0; linha<3; linha++){
        for (coluna=0; coluna<5; coluna++){
            cout << matriz_c[linha][coluna] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // mostra os elementos da linha 2 da matriz c
    for (linha=2; linha<3; linha++){
        for (coluna=0; coluna<5; coluna++){
            cout << matriz_c[linha][coluna] << "\t";
        }
        cout << "linha 2 da matriz C: "<< endl;
    }

    // mostra os elementos da coluna 3 da matriz c
    for (coluna=0; coluna<3; coluna++){
        cout << matriz_c[coluna][3] << "\t" ;
    }
    
}