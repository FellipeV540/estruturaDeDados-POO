#include <iostream>
using namespace std;

int main() {
  string letras;
  while(cin >> letras){

  int N;
  cin >> N;
  int L[1000000];

  for (int i = 0; i < N; i++){
    cin >> L[i];
    cout << letras[L[i]-1];
  }
  cout << endl;
  }
    return 0;
}
