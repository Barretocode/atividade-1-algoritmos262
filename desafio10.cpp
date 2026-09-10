#include <iostream>

using namespace std;

int main() {
    int numero;
    int fatorial = 1;

    cout << "Digite um numero inteiro nao negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Nao existe fatorial de numero negativo." << endl;
    } else {
        // Multiplica os numeros inteiros de 1 ate o numero informado.
        for (int contador = 1; contador <= numero; contador++) {
            fatorial = fatorial * contador;
        }

        cout << "O fatorial de " << numero << " e: " << fatorial << endl;
    }

    return 0;
}
