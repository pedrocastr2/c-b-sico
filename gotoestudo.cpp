// c++estudp.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std; // Evita ter que escrever std:: antes de cout e cin


int main() {


	int n1, n2, res;//variávies globais
	char opc;
inicio:

	cout << "Digite o primeiro valor :  ";
	cin >> n1;
	cout << "Digite o segundovalor :  ";
	cin >> n2;

	res = n1 + n2;

	if (res >= 60) {
		cout << "\n Aluno Aprovado\n";
	}
	else if (res >= 40) {

		cout << "\n Aluno recuperacao\n";

	}
	else {

		cout << "\n Aluno reprovado\n";
	}

	cout << "\nDigitar outras notas? [s/no]: \n";
	cin >> opc;

	if (opc == 'S' or opc == 's'){

		goto inicio;
	}



	return 0; // Indica que o programa terminou com sucesso
}
 