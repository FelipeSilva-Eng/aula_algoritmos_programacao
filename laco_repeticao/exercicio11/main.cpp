#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float temp, result, numero, cont;
    temp = 0;
    cont = 1;

    cout << "Informe o valor de N: " << endl;
    cin >> numero;

    while (cont <= numero) {
        result = 1/cont;
        temp += result;
        // cout << "TEMP == " << temp << endl;
        cout << "S = " << 1 << "/" << cont << "=" << result << endl;
        cont++;
    }

    cout << "RESULTADO DA SÉRIE >>> " << temp;




    return 0;
}