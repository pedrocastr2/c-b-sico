
#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin


int main() {
	int matriz[3][3];
	int i,c;

	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[1][0] = 1;
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;

	for(i=0;i<3;i++) {

		for (c = 0; c < 3; c++) {
			cout << matriz[c][i]<< " ";

	    }
		cout << "\n";
	}

	return 0; // Indica que o programa terminou com sucesso
}