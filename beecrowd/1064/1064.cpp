#include <iostream>
using namespace std;
#include <iomanip>

int main() {
  double N, positivo, soma;
  soma = positivo = 0;
  
  for (int i = 1; i <= 6; i++){
    cin >> N;
    if (N > 0){
      soma = soma + N;
      positivo = positivo + 1;
    }
  }

  double media = soma / positivo;
  
  cout << positivo << " valores positivos" << endl;
  cout << fixed << setprecision(1) << media << endl;
    

  return 0;
}
