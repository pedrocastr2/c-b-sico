#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin


int main() {
	int val;

	cout << "Selecione uma cor:\n ";
	cout << "Cor verde[1], Cor vermelha[2],Cor azul[3]";

	cin >> val;

	switch(val) {
	case 1:
		cout << "Voce selecionou a cor Verde ";
		break;
	case 2:
		cout << "Voce selecionou a cor Vermelha ";
		break;
	case 3:
		cout << "Voce selecionou a cor Azul ";
		break;
	default:
		cout << "valor selecionado invalido ";

	}


	cout << "\nPrograma executado";

	return 0; // Indica que o programa terminou com sucesso
}