#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    char letra;

    cout << "Digite uma letra: ";
    cin >> letra;

    if (letra == 'a' or letra == 'e' or letra == 'i' or letra == 'o' or letra == 'u') {
        cout << "É uma vogal";
    } else {
        cout << "Não é uma vogal";
    }

    return 0;


}