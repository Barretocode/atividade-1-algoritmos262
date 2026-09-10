#include <iostream>

using namespace std;

int main() {
    int idade;

    cout << "Digite a idade da pessoa: ";
    cin >> idade;

    // Verifica se a idade atende ao criterio do exercicio.
    if (idade >= 18) {
        cout << "A pessoa possui idade suficiente para votar." << endl;
    } else {
        cout << "A pessoa ainda nao possui idade suficiente para votar." << endl;
    }

    return 0;
}
