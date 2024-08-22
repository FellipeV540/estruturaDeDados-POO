#include <iostream>
using namespace std;

int CaixaAlta(char c){
    if (c >= 97 && c <= 122){
    c = c - 32;
    }
  return c;
}


int mai(){
  char palavra[100], SUPERPALAVRA[100];

  cin.get(palavra,100,'\n');

  int i = 0;
  while(palavra[i] != '\0'){
    SUPERPALAVRA[i] = CaixaAlta(palavra[i]);
    i++;
  }
    cout << SUPERPALAVRA << endl;
  return 0;
}
