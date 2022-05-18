#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero, cont;
    
    cout << "Informe um número para fatorar: " << endl;
    cin >> numero;

    for (cont=1; numero > 1; numero--) {
        cont = cont *numero;
        
                
    }

    cout << cont;
    return 0;
}