#include <iostream>
using namespace std;

int main() {
  int N, x, maiorPar, maiorImpar;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> x;
    if (i == 0) {
      maiorPar = x;
      maiorImpar = x;
    }
    else if (x > maiorPar && x % 2 == 0) {
      maiorPar = x;
    }
    else if (x > maiorImpar && x % 2 != 0) {
      maiorImpar = x;
    }
  }
  cout << maiorPar << endl;
  cout << maiorImpar << endl;
  return 0;
}
// maior numero par e impar output
