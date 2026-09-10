#include <iostream>

using namespace std;

int main() {
    double raio;
    double area;
    double pi = 3.14159;

    cout << "Digite o raio do circulo: ";
    cin >> raio;

    // Calcula a area usando a formula: pi vezes raio ao quadrado.
    area = pi * raio * raio;

    cout << "A area do circulo e: " << area << endl;

    return 0;
}
