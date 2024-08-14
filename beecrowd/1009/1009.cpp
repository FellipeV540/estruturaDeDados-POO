#include <iostream>
using namespace std;

int main(){
    string nome;
    cin >> nome;
    double sFixo, vendas;
    cin >> sFixo;
    cin >> vendas;

    double comissao = vendas * 0.15;
    double sTotal = sFixo + comissao;

    printf("TOTAL = R$ %.2lf\n", sTotal);

    return 0;
}