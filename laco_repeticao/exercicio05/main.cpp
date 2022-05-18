#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont, soma_total;

    soma_total = 0;
    cont = 100;

    while (cont <= 200) {
        soma_total += cont;
        cout << cont << endl;
        cont ++;
    }
    cout << soma_total;

    return 0;
}