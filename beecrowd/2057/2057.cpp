#include <iostream>
using namespace std;

int main() {
  int S, T, F, Hora;
  cin >> S >> T >> F;

  Hora = S + T + F;
  if (Hora >= 24){
    Hora = Hora - 24;
  }
  else if (Hora < 0){
    Hora = Hora + 24;
  }

  cout << Hora << endl;

    return 0;
}
