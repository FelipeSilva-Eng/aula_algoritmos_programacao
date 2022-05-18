#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    string nome;
    float nota1, nota2, nota3, media_final;

    cout << "Informe seu nome: ";
    cin >> nome;

    cout << "Digite as notas a seguir: " << endl;
    cout << "1° nota: ";
    cin >> nota1;
    cout << "2° nota: ";
    cin >> nota2;
    cout << "3° nota: ";
    cin >> nota3;

    media_final = (nota1 + nota2 + nota3) / 3;

    if (media_final >= 6) {
        cout << "Parabéns " << nome << ", você foi aprovado!";
    } else {
        cout << nome << ", você foi reprovado.";
    }

    return 0;
}