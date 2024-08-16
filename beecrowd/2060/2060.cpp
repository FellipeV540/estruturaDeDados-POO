#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  int m2, m3, m4, m5;
  m2 = m3 = m4 = m5 = 0;
  
  for (int i = 0; i < N; i++){
    int numeros;
    cin >> numeros;
      if (numeros % 2 == 0){
        m2++;;
      }
      if (numeros % 3 == 0){
        m3++;
      }
      if (numeros % 4 == 0){
        m4++;
      }
      if (numeros % 5 == 0){
        m5++;
      }
    }
  cout << m2 << " Multiplo(s) de 2" << endl;
  cout << m3 << " Multiplo(s) de 3" << endl;
  cout << m4 << " Multiplo(s) de 4" << endl;
  cout << m5 << " Multiplo(s) de 5" << endl;
    

  return 0;
}
