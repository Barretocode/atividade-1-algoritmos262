#include <iostream>

using namespace std;

int main() {
    double numero1;
    double numero2;
    double numero3;
    double maior;

    cout << "Digite o primeiro numero: ";
    cin >> numero1;

    cout << "Digite o segundo numero: ";
    cin >> numero2;

    cout << "Digite o terceiro numero: ";
    cin >> numero3;

    // Primeiro, considera o primeiro numero como o maior.
    maior = numero1;

    if (numero2 > maior) {
        maior = numero2;
    }

    if (numero3 > maior) {
        maior = numero3;
    }

    cout << "O maior numero e: " << maior << endl;

    return 0;
}
