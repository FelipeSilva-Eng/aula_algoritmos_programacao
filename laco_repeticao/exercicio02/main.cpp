#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont, result;
    cont = 1;

    while (cont <= 10) {
        result = 5 * cont;
        cout << "5x" << cont << " = " << result << endl;

        cont ++;
    }

    return 0;
}