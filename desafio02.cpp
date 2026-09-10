#include <iostream>

using namespace std;

int main() {
    double celsius;
    double fahrenheit;

    cout << "Digite a temperatura em graus Celsius: ";
    cin >> celsius;

    // Converte a temperatura de Celsius para Fahrenheit.
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    cout << "A temperatura em Fahrenheit e: " << fahrenheit << endl;

    return 0;
}
