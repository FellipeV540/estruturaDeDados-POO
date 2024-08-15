#include <iostream>
using namespace std;

int main() {
  int N, x;
  cin >> N;
  x = 1;

  if (N > 1 && N < 1000){
    for (int i = 1; i <= N; i++){
      int x2 = x * x;
      int x3 = x2 * x;
      cout << x << " " << x2 << " " << x3 << endl;
      x++;
    }
  }
  return 0;
}
