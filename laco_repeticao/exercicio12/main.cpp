#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade, quant_pessoas_maior_18, cont;

    quant_pessoas_maior_18 = 0;
    cont = 1;

    while (cont <= 10) {
        cout << "Digite sua idade: " << endl;
        cin >> idade;

        if (idade >= 18) {
            quant_pessoas_maior_18++;
            
        }

        cont++;
    }

    cout << "A quantidade de pessoas >= 18 anos é: " << quant_pessoas_maior_18 << endl;

    return 0;
}