#include <iostream>
using namespace std;

int main(){
    int X, Y;
    cin >> X >> Y;

    for (int i = 1; i <= Y;){
         for (int j = 1; j <= X; j++){
            if (j == X){
                cout << i;
            }
            else{
            cout << i << " ";
            }
            i++;
         }
         cout << endl;
    }

    return 0;
}