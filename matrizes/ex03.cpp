#include <iostream>
using namespace std;

#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");

    float matriz[3][3] ={0}, matriz_alterada[3][3];
    int linha, coluna;

    //solicita os valores ao usuario para preencher a matriz
    for (linha=0; linha<3; linha++){

        for (coluna=0; coluna<3; coluna++) {
            cout << "Digite um número para a posição " << "coluna " << coluna+1 << " x " << "linha " << linha+1 << endl;
            cin >> matriz[linha][coluna];

            //cria uma cópia da matriz para fazer as alterações somente na cópia
            matriz_alterada[linha][coluna] = matriz[linha][coluna];

            // verifica se a matriz original recebeu algum valor > 100, se sim, o valor de 0 é atribuido na matriz cópia
            if (matriz[linha][coluna] > 100) { // se o usuario digitar um valor 
                matriz_alterada[linha][coluna] = 0;
            }
        }
    }

    cout << "" << endl;
    cout << "Matriz original: " << endl;

    for (linha=0; linha<3; linha++){
        for (coluna=0; coluna<3; coluna++){
            cout << matriz[linha][coluna] << "\t"; // imprime a matriz original
    }
        cout << endl;
    }

    cout << "" << endl;
    cout << "Matriz alterada: " << endl;

    for (linha=0; linha<3; linha++){
        for (coluna=0; coluna<3; coluna++){
            cout << matriz_alterada[linha][coluna] << "\t"; // imprime a matriz cópia
    }
        cout << endl;
    }


    return 0;
}
