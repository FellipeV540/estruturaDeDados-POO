#include <iostream>
using namespace std;
#include <math.h>

int main() {
  int N, X, Y, soma, total;
  cin >> N;

  for(int i = 0; i < N; i++){
    cin >> X >> Y;
    if (X % 2 == 0){
      X = X + 1;
    }
    soma = total = X;
    for (int j = 1; j < Y; j++){
      soma = soma + 2; 
      total = total + soma;
    }
    cout << total << endl;
  }
  return 0;
}
