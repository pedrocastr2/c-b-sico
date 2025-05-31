

#include <iostream>
//int args armazenamento de argumentos, char *argv [] é uma matrix de um ponteiro.


using namespace std;

void texto();
void soma(int n1, int n2);
void sub(int n1, int  n2);
void tr(string tra[4]);
int soma2(int n1, int n2);

int main()
{
    string transp[4] = { "carro","trem","moto","aviao" };
    int res;

    texto();
    soma(3, 2);
    sub(3, 2);
    res = soma2(40, 50);

    cout << "\nValor de soma2/res: " << res << "\n";

    cout << "\n----------------------------------\n";
    tr(transp);
    
    

    return 0;

}

void texto() {
    cout << "\nveja os calculos em c++\n";


}

void soma(int n1, int n2){

    cout << "\nSoma dos valores: " << n1 + n2 << "\n";
}




int soma2(int n1, int n2) {

    return n1 + n2;
}


void sub(int n1 ,int n2){
    cout << "\nSubtracao dos valores: " << n1 - n2 << "\n";

}


void tr(string tra[4]) {

    for (int i = 0;i < 4;i++) {
        cout << tra[i] << "\n";
    }
}