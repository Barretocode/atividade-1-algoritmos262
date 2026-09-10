#include <iostream>

using namespace std;

int main() {
    double notaMatematica;
    double notaPortugues;
    double notaCiencias;
    double media;

    // Recebe as notas das três provas.
    cout << "Digite a nota de Matematica: ";
    cin >> notaMatematica;

    cout << "Digite a nota de Portugues: ";
    cin >> notaPortugues;

    cout << "Digite a nota de Ciencias: ";
    cin >> notaCiencias;

    // Soma as três notas e divide pela quantidade de provas.
    media = (notaMatematica + notaPortugues + notaCiencias) / 3.0;

    cout << "A media das tres notas e: " << media << endl;

    return 0;
}
