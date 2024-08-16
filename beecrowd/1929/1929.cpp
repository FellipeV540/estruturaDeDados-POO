#include <iostream>
using namespace std;

bool triangulo(int x, int y, int z) {
    return (x + y > z) && (x + z > y) && (y + z > x);
}

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if (triangulo(A, B, C) || 
        triangulo(A, B, D) || 
        triangulo(A, C, D) || 
        triangulo(B, C, D)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
