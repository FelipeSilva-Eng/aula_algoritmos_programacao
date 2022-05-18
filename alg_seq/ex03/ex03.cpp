#include <iostream>
using namespace std;

int main()
{
	float valor_kg_produto, quantidade_consumida, valor_pagamento;
	
	cout << "informe o valor do kilo do produto: R$ ";
	cin >> valor_kg_produto;

	cout << "Agora informe a quantidade consumida deste produto: ";
	cin >> quantidade_consumida;

	cout << "\nOk, calculando  o valor para pagamento...\n";
	
	valor_pagamento = quantidade_consumida * valor_kg_produto;
	
	cout << "\n##### RESUMO DO PEDIDO #####:";
	cout << "\nQuantidade consumida: " << quantidade_consumida;
	cout << "\nValor pelo quilo do produto: " << valor_kg_produto;
	cout << "\n______________________________";
	cout << "\nTotal a pagar: R$ " << valor_pagamento;

	return 0;

}
