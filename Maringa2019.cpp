#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //declara três constantes do programa
    const double HAB {423666}, MULHER {217000}, VEICULO {327000};

    //declara três variáveis reais do programa
    double PercF, PercM, VeiHab;

    //{Processamentos dos dados}
    PercM = ((HAB - MULHER) / HAB) * 100; // % de homens
    PercF = 100 - PercM; //% de mulheres
    VeiHab = VEICULO / HAB; //razão: veículos por habitante

    //{Saída das informações}
    cout << "Percentual de homens..: " << PercM << "%" << endl;
    cout << "Percentual de mulheres: " << PercF << "%" << endl;
    cout << "Veículos por habitante: " << VeiHab << endl;

    return 0;
}