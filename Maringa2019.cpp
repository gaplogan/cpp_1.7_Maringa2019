#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //declara tr�s constantes do programa
    const double HAB {423666}, MULHER {217000}, VEICULO {327000};

    //declara tr�s vari�veis reais do programa
    double PercF, PercM, VeiHab;

    //{Processamentos dos dados}
    PercM = ((HAB - MULHER) / HAB) * 100; // % de homens
    PercF = 100 - PercM; //% de mulheres
    VeiHab = VEICULO / HAB; //raz�o: ve�culos por habitante

    //{Sa�da das informa��es}
    cout << "Percentual de homens..: " << PercM << "%" << endl;
    cout << "Percentual de mulheres: " << PercF << "%" << endl;
    cout << "Ve�culos por habitante: " << VeiHab << endl;

    return 0;
}