#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n, aux = 2, temp, ult = 1, penult = 0;

    cout << "Exibir quantos termos? " << endl;
    cin >> n;

    cout << penult << ult << endl;

    while (aux<=n) {
        cout << (ult + penult) << endl;
        temp = penult;
        penult = ult;
        ult = ult + temp;

        aux++;
    }


    return 0;
}