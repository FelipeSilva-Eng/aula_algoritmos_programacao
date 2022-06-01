/*

Faça um programa que solicita ao usuário 16 valores reais e armazene em uma
matriz 4x4. O programa deve somar os elementos de cada uma das linhas armazenando
o resultado da soma em um vetor. A seguir, deve multiplicar cada elemento da matriz
pela soma da sua respectiva linha. Exiba na tela a matriz resultante.


*/

#include <iostream>
using namespace std;

#include <locale.h>

#define TAM 3

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[TAM][TAM], linha, coluna, soma=0, vetor[TAM];

    // coloca um valor em cada posição da matriz
    for (linha=0; linha<TAM; linha++){
        for (coluna=0; coluna<TAM; coluna++){
            cout << "Informe o valor para a posição [" << linha << "][" << coluna << "]"<< endl;
            cin >> matriz[linha][coluna];

            soma += matriz[linha][coluna];
        }

        vetor[linha] = soma; //o vetor na posição [1][2][3]... vai armazenar a soma total da linha
        soma = 0;
    }

    for (linha=0; linha<TAM; linha++){// imprime na tela a soma da linha
        for (coluna=0; coluna<TAM; coluna++){
            matriz[linha][coluna] *= vetor[linha];
            cout << matriz[linha][coluna]  << "\t";
        }
        cout << endl;
    }

    return 0;
}