#include <iostream>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B;

  if (A == B){
    C = A;
    cout << C << endl;
  }
  else if (A > B){
    C = A;
    cout << C << endl;
  }
  else if (A < B){
    C = B;
    cout << C << endl;
  }
  return 0;
}
