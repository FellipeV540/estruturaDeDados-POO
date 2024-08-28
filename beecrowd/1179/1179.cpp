#include <iostream>
using namespace std;

int main(){
  int x[15], par[5], impar[5], cp=0, ci=0;

  for(int i=0;i<15;i++){
    cin>>x[i];
    if(x[i]%2==0){
      par[cp]=x[i];
      cp++;
    if(cp==5){
      for(int j=0;j<5;j++){
        cout<< "par[" << j << "] = " << par[j] << endl;
      }
    cp=0;
    }
    }
    else {
      impar[ci]=x[i];
      ci++;
      if(ci==5){
        for(int j=0;j<5;j++){
          cout << "impar[" << j << "] = " << impar[j] << endl;
      }
      ci=0;
      }
    } 
  }

  for(int i=0;i<ci;i++){
    cout << "impar[" << i << "] = " << impar[i] << endl;
  }

  for(int i=0;i<cp;i++){
    cout << "par[" << i<< "] = " << par[i] << endl;
  }

  return 0;
}
