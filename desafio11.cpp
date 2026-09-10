#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Digite um numero para ver sua tabuada: ";
    cin >> numero;

    // Repete os calculos de 1 ate 10.
    for (int contador = 1; contador <= 10; contador++) {
        cout << numero << " x " << contador << " = "
             << numero * contador << endl;
    }

    return 0;
}
