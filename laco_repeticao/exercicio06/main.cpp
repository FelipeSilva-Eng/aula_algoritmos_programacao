#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int base, expoente, cont, result;
    cont = 1;
    result = 1;

    cout << "Digite os valores para base e expoente: " << endl;
    cin >> base >> expoente;

    while (cont <= expoente) {
        result = result * base; // o resultado no primeiro loop será 3x1, depois 3x3, depois 3x9, para 3³, por exemplo
        cont ++;

    }

    cout << result << endl;

    //cout << result << endl;


    return 0;
}