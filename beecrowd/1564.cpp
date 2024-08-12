#include <iostream>
using namespace std;

int main(){
 
    
    int N;
    while (cin >> N){
    
    if (0 <= N && N <= 100){
      if (N == 0){
        cout << "vai ter copa!" << endl;
      }

      else if (N != 0){
        cout << "vai ter duas!" << endl;
      }
      else {
        break;
      }
    }}
    
  
  

  return 0;
}