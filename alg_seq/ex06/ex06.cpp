#include <iostream>
using namespace std;

int main()
{
	string var_a, var_b, var_c;
	
	cout << "\nInforme o valor da primeira variavel: ";
	cin >> var_a;

	cout << "\nAgora informe o valor da segunda variavel: ";
	cin >> var_b;

	//Troca das variaveis
	var_c = var_a;
	var_a = var_b;
	var_b = var_a;

	cout << "\nAs variaveis digitadas foram: ";
	cout << "var_a: " << var_a << " var_b: " << var_b;

	return 0;
}
