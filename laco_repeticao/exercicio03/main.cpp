#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont;
    cont = 100;

    while (cont != 0) {
        cout << cont << endl;
        cont --;
    }

    return 0;
}