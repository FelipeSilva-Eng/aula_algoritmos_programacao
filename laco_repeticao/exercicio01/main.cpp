#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont = 1;

    while (cont <= 30) {
        cout << "Não vou colar na prova! " << cont << endl;
        cont ++;
    }

    return 0;
}