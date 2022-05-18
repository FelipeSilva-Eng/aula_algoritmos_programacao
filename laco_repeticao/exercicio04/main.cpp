#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cont;
    cont = 50;

    while (cont <= 200) {
        cout << cont << endl;

        cont ++;
    } 


    return 0;
}