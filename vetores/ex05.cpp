#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");


    int vet_a[5], vet_b[5], vet_c[5], i;

    for (i=0; i<5; i++) {
        cout << "Informe o numero da posição " << i+1 << endl;
        cin >> vet_a[i];
    }
    for (i=0; i<5; i++) {
        cout << "Informe o numero da posição " << i+1 << endl;
        cin >> vet_b[i];
    }

    for (i=0; i<5; i++) {
        vet_c[i] = vet_a[i] - vet_b[i];
    }

    cout << vet_c[0] << endl;

    return 0;
}