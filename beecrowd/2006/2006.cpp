#include <iostream>
using namespace std;

bool certo(int X, int cha){
  if (X == cha){
    return true;
  }
  else {
    return false;
  }
}

int main() {
  int T, A, B, C, D, E;
  cin >> T;
  int Ncerto = 0;
  cin >> A >> B >> C >> D >> E;

  if (certo(A, T) == true){
    Ncerto++;
  }
  if (certo(B, T) == true){
    Ncerto = Ncerto + 1;
  }
  if (certo(C, T) == true){
    Ncerto = Ncerto + 1;
  }
  if (certo(D, T) == true){
    Ncerto = Ncerto + 1;
  }
  if (certo(E, T) == true){
    Ncerto = Ncerto + 1;
  }

  cout << Ncerto << endl;

  return 0;
}
