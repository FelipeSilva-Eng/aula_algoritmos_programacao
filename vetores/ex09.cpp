#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int vetor1[8], vetor2[8], i, j, vetor_temp[8];
    
    for (i=0; i<8; i++) {
        cout << "Digite o valor para a " << i+1  << "o posição: " << endl;
        cin >> vetor1[i];

        vetor_temp[i] = vetor1[i];
    }

    for (i=0; i<8; i++) {
            cout << "Digite o valor para a " << i+1  << "o posição: " << endl;
            cin >> vetor2[i];

            vetor1[i] = vetor2[i];
            vetor2[i] = vetor_temp[i];
            
        }

    for (i=0; i<8; i++) {
        cout << "VETOR1 ->> " << vetor1[i]  << "\t";
        cout << " " << endl;
        cout << "VETOR2 ->> " << vetor2[i]  << "\t";

    }


    return 0;
}