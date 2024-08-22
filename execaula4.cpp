#include <iostream>
using namespace std;

int man(){
  char palavra[100];

  cin.get(palavra,100,'\n');

  int i = 0, numL = 0;
  while(palavra[i] != '\0'){
    i++;
    numL++;
  }
  cout << numL << endl;
  return 0;
}
