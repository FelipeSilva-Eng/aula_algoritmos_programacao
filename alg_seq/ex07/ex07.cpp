#include <iostream>
using namespace std;

#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float distancia, consumo, preco_combustivel, total_gasto;
	
	cout << "informe a distancia a ser percorrida: ";
	cin >> distancia;
	
	cout << "Agora informe o consumo médio de combustivel por km do veiculo: ";
	cin >> consumo;

	cout << "Também informe o preco atual do combustivel: ";
	cin >> preco_combustivel;
	
	total_gasto = (distancia / consumo) * preco_combustivel;
	
	cout << "O total a pagar nessa viagem é de: R$ " << total_gasto;
	
	return 0;

}
