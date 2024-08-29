#include <iostream>
using namespace std;

int main(){
  int T, N;
  cin >> T >> N;
  while(T != 0){
    string times;
    int pontos, totalpontos = 3 * N, pontosRodada = 0;
    for(int i = 0; i < T; i++){
      cin >> times >> pontos;
      pontosRodada += pontos;
    }
    cout << totalpontos - pontosRodada << endl;
    cin >> T >> N;
  }
  return 0;
}
