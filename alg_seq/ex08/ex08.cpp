#include <iostream>
using namespace std;

#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media_final;

	cout << "Informe a primeira nota: ";
	cin >> nota1;
	cout << "Informe a segunda nota: ";
	cin >> nota2;
	cout << "Informe a terceira nota: ";
	cin >> nota3;

	media_final = (nota1 * 2 + nota2 * 4 + nota3 * 6) / 12;

	cout << "A média final do aluni é de: " << media_final;

	return 0;


}
