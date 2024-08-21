#include <iostream>
using namespace std;
#include <math.h>

int main() {
  int N, elevado;
  cin >> N;

  for(int i = 1; i <= N; i++){
    if (i % 2 == 0){
      elevado = pow(i,2);
      cout << i << "^" << 2 << " = " << elevado << endl;
    }
  }
    
  return 0;
}
