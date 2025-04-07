#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin

int n1,n2;//variávies globais
int n3;
int main() {
	int n1 = 100;
	int n2 = 20;
	int n3 = 15;
	

	if (n1 < n2 and n1 < n3) {
		cout << "N1 e menor que n2 e n3";
	}
    else {
	  
	   cout << "N1 e maior que n2 e n3";

}
	
	return 0; // Indica que o programa terminou com sucesso
}