#include <iostream>
#include <iomanip> // Para definir a precisão dos números decimais

using namespace std;

int main() {
    // Definir as variáveis para as notas e a média
    double N1, N2, N3, N4, media, notaExame, mediaFinal;

    // Ler as quatro notas
    cin >> N1 >> N2 >> N3 >> N4;

    // Calcular a média ponderada
    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;

    // Exibir a média com uma casa decimal
    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    // Verificar o status do aluno
    if (media >= 7.0) {
        cout << "Aluno aprovado." << endl;
    } else if (media < 5.0) {
        cout << "Aluno reprovado." << endl;
    } else {
        cout << "Aluno em exame." << endl;

        // Ler a nota do exame
        cin >> notaExame;

        // Exibir a nota do exame com uma casa decimal
        cout << "Nota do exame: " << notaExame << endl;

        // Recalcular a média final
        mediaFinal = (media + notaExame) / 2.0;

        // Verificar o status final do aluno
        if (mediaFinal >= 5.0) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }

        // Exibir a média final com uma casa decimal
        cout << "Media final: " << mediaFinal << endl;
    }

    return 0;
}
