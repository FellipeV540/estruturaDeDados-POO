#include <iostream>
using namespace std;
#include <math.h>

int main() {
  int N, X;
  bool primo;
  cin >> N;
  for (int i = 0; i < N; i++){
    cin >> X;
    primo = true;
    for (int j = 2; j < X-1; j++){
      if (X % j == 0){
        primo = false;
      }
      else {
        continue;
      }
    }
    if (primo == true){
      cout << X << " eh primo" << endl;
    }
    else if (primo == false){
      cout << X << " nao eh primo" << endl;
    }
  }
  
  return 0;
}
