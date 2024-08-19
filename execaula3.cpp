#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  double n[1000];
  for (int i = 0; i < N; i++){
    cin >> n[i];
  }

  double menor1, menor2;
  int menor1Pos, menor2Pos;
  menor1 = menor2 = n[0];
  for (int i = 0; i < N; i++){
    if (n[i] <= menor1 && n[i] < menor2){
      menor1 = n[i];
      menor1Pos = i;
    }
  }
  for (int i = 0; i < N; i++){
    if (n[i] <= menor2 && n[i] > menor1){
      menor2 = n[i];
      menor2Pos = i;
    }
  }
  
  cout << menor1 << " na posicao " << menor1Pos << endl;
  cout << menor2 << " na posicao " << menor2Pos << endl;

  return 0;
}
