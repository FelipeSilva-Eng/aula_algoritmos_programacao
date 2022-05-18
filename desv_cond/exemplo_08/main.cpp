#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;

    cout << "Informe o primeiro número: ";
    cin >> num1;

    cout << "Agora informe o segundo número: ";
    cin >> num2;

    cout << "Por último, informe o terceiro número: ";
    cin >> num3;

    if (num1 < num2 && num2 < num3){
        cout << num2;
    } else {
        if (num2  < num1 && num2 < num3){
            cout << num2;
        }else {
            if (num3 < num1 && num3 < num2) {
                cout << num3;
            }
        }
    }


    return 0;
}