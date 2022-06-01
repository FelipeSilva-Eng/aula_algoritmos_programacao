#include <iostream>
using namespace std;
#include <time.h>

#include <locale.h>

#define TAM 4

int main(){
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL)); //gera a partir da hora do sistema


    // definindo variaveis
    int linha, coluna;
    float matriz_a[TAM][TAM], numero_aleatorio;
    float maior=0, menor=0;
    int posicao_linha_maior=0, posicao_linha_menor=0, posicao_coluna_maior=0, posicao_coluna_menor=0;

    //gera a matriz com números float alatórios
    for (linha=0; linha<TAM; linha++){
        for (coluna=0; coluna<TAM; coluna++){
            matriz_a[linha][coluna] = (rand()%20) / 3.0;

            if (matriz_a[linha][coluna] > maior){
                maior = matriz_a[linha][coluna];
                posicao_linha_maior = linha;
                posicao_coluna_maior = coluna;
            }
        }
    }

    // percorre a linha da matriz que possui o maior valor
    for (posicao_linha_maior=0; posicao_linha_maior<TAM; posicao_linha_maior++){
        cout << matriz_a[posicao_linha_maior][posicao_coluna_maior]; 
    }

    //imprime a matriz
    for (linha=0; linha<TAM; linha++){
        for (coluna=0; coluna<TAM; coluna++){
            cout << matriz_a[linha][coluna] << "\t";
        }
        cout << endl;
    }

    return 0;
}