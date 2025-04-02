#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin
 int main(){
	 int a = 3;
	 int b = 2;


	 int soma = a + b;
	 cout << "Soma:" << soma << endl;


	 int sub = a - b;
	 cout << "Sub " << sub << endl;


	 int mult = a * b;
	 cout << "Multi: " << mult << endl;


	 float div = a / b;
	 cout << "divisao: " << div << endl;

	 float rest = a % b;
	 cout << "resto da divisão: " << rest << endl;
   return 0; // Indica que o programa terminou com sucesso
}