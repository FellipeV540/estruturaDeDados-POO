#include <iostream>
using namespace std;

int main() {
  int x, alcool, gasolina, diesel;
  cin >> x;
  alcool = 0;
  gasolina = 0;
  diesel = 0;

  while (x != 4){
  cin >> x;

    if (x == 1) {
      alcool++;
    }
    else if (x == 2) {
      gasolina++;
    }
    else if (x == 3) {
      diesel++;
    }
  }
  
  cout << "MUITO OBRIGADO" << endl;
  cout << "Alcool: " << alcool <<endl;
  cout << "Gasolina: " << gasolina << endl;
  cout << "Diesel: " << diesel << endl;
  
  return 0;
}
