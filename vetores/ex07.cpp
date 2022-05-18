#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int my_vector[5], i;
    int inverted_vector[5], j;

    for (i=0; i<5; i++) {
        cout << "informe o valor para a " << i+1 << "° posição: ";
        cin >> my_vector[i];

    }

    i = 5;
    j = 0;

    while (i>0 and j<5) {
        inverted_vector[j] = my_vector[i]; 
        i--;
        j++;   
    }

    for (i=0; i<5; i++) {
        cout << inverted_vector[i] << endl;
    }

    return 0;
}