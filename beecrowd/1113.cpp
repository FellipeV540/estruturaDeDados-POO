#include <iostream>
using namespace std;
int main() {
    int X, Y, maior, menor;
    while (true) {
        cin >> X >> Y;
        if (X == Y) {
            break;
        }
        if (X > Y) {
            cout << "Decrescente" << endl;
        }
        else {
            cout << "Crescente" << endl;
        }
    }
    
    return 0;
}
