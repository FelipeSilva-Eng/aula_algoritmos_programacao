// Pedir ao usuario dois numeros reais
// se forem iguais, mensagem: "Eles são iguais"
// Se diferentes , exibir o numero desejado

#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num_1, num_2;

    cout << "Digite o primeiro número: ";
    cin >> num_1;

    cout << "Agora digite o segundo número: ";
    cin >> num_2;

    if (num_1 == num_2) {
        cout << "Os número são iguais.";
    } else {
        if (num_1 > num_2) {
            cout << "O maior número digitado foi: " << num_1 << endl;
        } else {
            cout << "O maior número digitado foi: " << num_2 << endl;
        }
    }

    return 0;
}