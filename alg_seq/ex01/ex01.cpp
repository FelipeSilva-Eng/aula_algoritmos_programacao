#include <iostream>
using namespace std;
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float valor_pago, preco_produto, troco;
	cout << "##### CALCULADORA DE TROCO #####\n";
	cout << "\nInforme o valor pago: R$ ";
	cin >> valor_pago;
	cout << "Informe o valor do produto: R$ ";
	cin >> preco_produto;

	troco = valor_pago - preco_produto;

	cout << "\nDevolver troco de R$ " << troco;

	cout << "\n##### FIM #####";

    return 0;
}
