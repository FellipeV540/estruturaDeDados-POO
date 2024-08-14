#include <iostream>
using namespace std;

int main() {
    int total_dias;
    cin >> total_dias;

    int anos = total_dias / 365;
    int meses = (total_dias % 365) / 30;
    int dias = (total_dias % 365) % 30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;

    return 0;
}
