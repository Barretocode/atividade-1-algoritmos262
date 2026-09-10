#include <iostream>

using namespace std;

int main() {
    double horasTrabalhadas;
    double valorPorHora;
    double salarioBruto;

    cout << "Digite a quantidade de horas trabalhadas: ";
    cin >> horasTrabalhadas;

    cout << "Digite o valor recebido por hora: ";
    cin >> valorPorHora;

    // O salario bruto e a quantidade de horas vezes o valor de cada hora.
    salarioBruto = horasTrabalhadas * valorPorHora;

    cout << "O salario bruto e: R$ " << salarioBruto << endl;

    return 0;
}
