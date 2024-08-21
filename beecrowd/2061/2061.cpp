#include <iostream>
using namespace std;

int main() {
  int N, M;
  string A;
  cin >> N >> M;

  for (int i = 0; i < M; i++){
    cin >> A;
    if (A == "fechou"){
      N = N + 1;
    }
    else if (A == "clicou"){
      N = N - 1;
    }
    else{
      continue;
    }
  }
  cout << N << endl;
  return 0;
}
