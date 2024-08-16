#include <iostream>
using namespace std;
#include <math.h>

int main(){
  int N;
  cin >> N;

  while (N <= 0 || N > pow(10, 6)){
    cin >> N;
  }

  for (int i = 1; i < N; i++){
    cout << "Ho ";
  }
  cout << "Ho!" << endl;
  
  return 0;
}
