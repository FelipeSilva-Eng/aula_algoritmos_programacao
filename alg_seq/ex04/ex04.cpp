#include <iostream>
using namespace std;

int main()
{
	float valor_produto, preco_final;
	
	cout << "_____________________________________________\n";
	cout << "##### CALCULADORA DE VALOR COM IMPOSTOS #####";
	cout << "\nInforme o valor do produto: R$ ";
	cin >> valor_produto;

	cout << "\nOk, adicionando impostos...\n";

	preco_final = valor_produto + (valor_produto * 0.15);

	cout << "\n##### RESUMO DO PEDIDO ###";
	cout << "\nPreço do produto: R$ " << valor_produto;
	cout << "\nImpostos: 15 %";
	cout << "\nValor final do produto: R$ " <<  preco_final;
	cout << "\n____________________________________________";
	return 0;


}
