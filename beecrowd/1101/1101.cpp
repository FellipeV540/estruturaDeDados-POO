#include <iostream>
using namespace std;

int main() {
  int M, N;
  while (true) {
    cin >> M >> N;

    if (M <= 0 || N <= 0) {
      break; 
    }

    int menor = min(M, N);
    int maior = max(M, N);

    int soma = 0;
    for (int i = menor; i <= maior; i++) {
      soma += i;
      cout << i << " ";
    }
    cout << "Sum=" << soma << endl;
  }
  return 0;
}
