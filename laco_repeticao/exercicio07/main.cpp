#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor;
    int temp_num;
    valor = 0;
    temp_num = 0;

    do
    {
        cout << "Digite um número inteiro: " << endl;
        cin >> temp_num;

        if (temp_num % 2 == 0) {
            valor += temp_num;
        }
    } while (temp_num != 0);

    cout << valor << endl;
    

    return 0;
}