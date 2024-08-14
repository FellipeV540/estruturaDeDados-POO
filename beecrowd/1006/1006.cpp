#include <iostream>
using namespace std;

int main(){
    double A, B, C;
    cin >> A;
    cin >> B;
    cin >> C;

    float pA, pB, pC;
    pA = 2;
    pB = 3;
    pC = 5;

    float nT = A * pA + B * pB + C * pC;
    float pT = pA + pB + pC;

    float MEDIA = nT / pT;
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}