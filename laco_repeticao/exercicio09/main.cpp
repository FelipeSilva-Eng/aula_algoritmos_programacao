#include <iostream>
using namespace std;

#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, resultado_op;
    int opcao;

    do {
        cout << "\nDigite os dois operandos: " << endl;
        cin >> num1 >> num2;

        cout << "\nDigite o número da operação desejada: \n[1]-SOMA [2]-PRODUTO [3]-DIVISÃO [4]-POTENCIA" << endl;
        cin >> opcao;


        switch (opcao) {
            case 1:
                resultado_op = num1 + num2;
                cout << num1 << " + " << num2 << " = " << resultado_op << endl;
                break;

            case 2:
                resultado_op = num1 * num2;
                cout << num1 << " * " << num2 << " = " << resultado_op << endl;
                break;
            
            case 3:
                resultado_op = num1 / num2;
                cout << num1 << " / " << num2 << " = " << resultado_op << endl;
                break;

            case 4:
                break;
            
            default:
                cout << "Opção incorreta! Digite novamente." << endl;
                break;
            }
        } while (num1 != 0 and num2 != 0);
    

    cout << "Fechando calculadora... " << endl;

    return 0;
}