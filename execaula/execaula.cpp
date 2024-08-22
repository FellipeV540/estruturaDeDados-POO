#include <iostream>
using namespace std;

int main() {
  int N, x, maior, menor;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> x;
    if (i == 0) {
      maior = x;
      menor = x;
    }
    else if (x > maior) {
      maior = x;
    }
    else if (x < menor) {
      menor = x;
    }
  }
  cout << maior << endl;
  cout << menor << endl;
  return 0;
}
// menor e maior numero
