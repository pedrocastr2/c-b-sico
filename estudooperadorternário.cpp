#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin

int n1, x;//variávies globais
char opc;
int main() {

	cout << "Digite o primeiro valor :  ";
	cin >> n1;
	
	x = 5;


	cout << "\n Antigo valor de x: " << x << "\n";


	(n1 > 10) ? x++: x--;


	cout << "\n Novo valor de x: " << x << "\n";

	return 0; // Indica que o programa terminou com sucesso
}