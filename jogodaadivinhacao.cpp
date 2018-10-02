#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    cout << "       P  /_\\  P                               " << endl;
    cout << "      /_\\_|_|_/_\\                              " << endl;
    cout << "  n_n | ||. .|| | n_n         Bem-vindos ao    " << endl;
    cout << "  |_|_|nnnn nnnn|_|_|     Jogo da Adivinhação! " << endl;
    cout << " |\" \"  |  |_|  |  \" \"|                         " << endl;
    cout << " |_____| ' _ ' |_____|                         " << endl;
    cout << "       \\__|_|__/                               " << endl;

    cout << "Escolha o seu nível de dificuldade:" << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if(dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else {
        numero_de_tentativas = 5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;

    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;

    for(tentativas = 1;tentativas <= numero_de_tentativas;tentativas++){
        int chute;
        cout << "Tentativa " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos -= pontos_perdidos;

        cout << "O valor do seu chute é: " << chute << endl;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou)
        {
            cout << "Parabéns! Você acertou o número secreto!" << endl;
            nao_acertou = false;
            break;
        }
        else if (maior)
        {
            cout << "Seu chute foi maior que o número secreto!" << endl;
        }
        else
        {
            cout << "Seu chute foi menor que o número secreto!" << endl;
        }
    }

    cout << "Fim de jogo!" << endl;
    if(nao_acertou){
        cout << "Você perdeu! Tente novamente!" << endl;
        cout << endl << endl;
        cout << " \\|/ ____ \\|/ " << endl;
        cout << "  @~/ ,. \\~@  " << endl;
        cout << " /_( \\__/ )_\\ " << endl;
        cout << "    \\__U_/    " << endl;
    }
    else{
        cout << "Você acertou o número secreto em " << tentativas << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
        cout << endl << endl;
        cout << "               OOOOOOOOOOO               " << endl;
        cout << "           OOOOOOOOOOOOOOOOOOO           " << endl;
        cout << "        OOOOOO  OOOOOOOOO  OOOOOO        " << endl;
        cout << "      OOOOOO      OOOOO      OOOOOO      " << endl;
        cout << "    OOOOOOOO  #   OOOOO  #   OOOOOOOO    " << endl;
        cout << "   OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   " << endl;
        cout << "  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  " << endl;
        cout << "  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  " << endl;
        cout << "  OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  " << endl;
        cout << "   OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   " << endl;
        cout << "    OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    " << endl;
        cout << "      OOOOO   OOOOOOOOOOOOOOO   OOOO     " << endl;
        cout << "        OOOOOO   OOOOOOOOO   OOOOOO      " << endl;
        cout << "           OOOOOO         OOOOOO         " << endl;
        cout << "               OOOOOOOOOOOO              " << endl;
    }
}