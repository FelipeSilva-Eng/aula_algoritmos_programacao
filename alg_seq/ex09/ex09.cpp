#include <iostream>
using namespace std;

#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");

	float s1, c1, c2, resto;

	cout << "Informe o salario de João: ";
	cin >> s1;

	cout << "Qual o valor da primeira conta: R$ ";
	cin >> c1;

	cout << "Qual o valor da segunda conta: R$ ";
	cin >> c2;

	resto = s1 - (c1 * 0.02 + c2 * 0.02);
	
	cout << "Sobrará do salário de João: R$ " <<  resto;
	
	return 0;

}

	 
