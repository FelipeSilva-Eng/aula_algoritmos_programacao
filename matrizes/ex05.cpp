#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[3][3], linha, coluna;

    for (linha=0; linha<3; linha++){
        for (coluna=0; coluna<3; coluna++){
            cout << "informe o valor para [" << coluna << "][" << linha << "]" << endl;
            cin >> matriz[linha][coluna];
        }
    }


    cout << "Matriz completa..." << endl;
    for (linha=0; linha<3; linha++){
        for (coluna=0; coluna<3; coluna++){
            cout << matriz[linha][coluna] << "\t";
    }
        cout << endl;
    }

    cout << "Diagonal principal..." << endl;
    for (linha=0; linha<3; linha++){
        cout << matriz[linha][linha] << "\t"; //diagonal principal é quando o indice da linha é igual ao indice da coluna.
    }
    cout << endl;
    

    return 0;
}