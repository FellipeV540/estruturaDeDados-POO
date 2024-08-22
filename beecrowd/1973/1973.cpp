#include <iostream>
using namespace std;

int main() {
  unsigned long long N, atacadas = 0 , max_carneiros = 0;
  cin >> N;//numero de estrelas
  if (N < 0 || N > 1000000){
    cin >> N;
  }
  unsigned long long X[1000000];
  bool proxima;

  for(unsigned long long i = 1; i <= N; i++){
    cin >> X[i];//numero de carneiros por estrela i
    max_carneiros = max_carneiros + X[i];
  }
  unsigned long long j = 1, maiorJ = 1;
  if (X[1] > 0){
    atacadas = 1;
  }
  
  for(j = 1; j <= N;){
    if (j > maiorJ){
      maiorJ = j;
      atacadas += 1;
    }
    
    if (j == 0){//estrela 0 termina jornada terminada
      break;
    }
    else if (X[j] == 0){//carneiros = 0 termina jornada
      break;
    }
    else if (X[j] % 2 != 0){
      proxima = true;
    }
    else if (X[j] % 2 == 0){
      proxima = false;
    }
    max_carneiros = max_carneiros - 1;
    X[j] = X[j] - 1;
    
    if (proxima == true){
      j = j + 1;
    }
    else if (proxima == false){
      j = j - 1;
    }
  }

  cout << atacadas << " " << max_carneiros << endl;
  
  return 0;
}
