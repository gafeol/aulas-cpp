#include <iostream>
using namespace std;

int main()
{
    cout << "**************************************" << endl;
    cout << "* Bem-vindos ao jogo da adivinhação! *" << endl;
    cout << "**************************************" << endl;

    int numero_secreto = 42;

    int chute;
    cout << "Qual seu chute? ";
    cin >> chute;

    cout << "O valor do seu chute é: " << chute << endl;
}