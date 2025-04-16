
#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin


int main() {
	int vetor[5];
	int i;

	vetor[0] = 10;
	vetor[1] = 20;
    vetor[2] = 30;
	vetor[3] = 40;
	vetor[4] = 50;


	for (i = 0;i <5;i++) {
		cout << vetor[i] << "\n";
	}




	return 0; // Indica que o programa terminou com sucesso
}