#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin


int main() {
	int cont;
	cont = 0;
	
	while(cont<11){
		cout << "\n" << cont;
		cont++;
	}
	cout << "\n foi de 0 a 10";

	return 0; // Indica que o programa terminou com sucesso
}