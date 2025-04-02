#include <iostream>  // Biblioteca para entrada e saída
using namespace std; // Evita ter que escrever std:: antes de cout e cin
 int main(){

     int vidas = 0;
     char letra = 'b';
     double decimal = 5.2;
     double decimal2 = 5.32;
     bool vivo = true;
     string nome = "Bruno";

     cout << "Digite um número de vidas: ";
     cin >> vidas;
     cout << "digite uma letra: ";
     cin >> letra;
     cout << "digite seu saldo ";
     cin >> decimal2;
     cout << "digite seu nome: ";
     cin >> nome;

     cout << vidas << "\n" <<letra << "\n" <<decimal2 << "\n" <<nome;
   return 0; // Indica que o programa terminou com sucesso
}