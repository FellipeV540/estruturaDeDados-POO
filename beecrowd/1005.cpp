#include <iostream>
using namespace std;

int main(){
    float n1, n2;
    cin >> n1;
    cin >> n2;

    float p1, p2;
    p1 = 3.5;
    p2 = 7.5;

    float nT = n1 * p1 + n2 * p2;
    float pT = p1 + p2;

    float MEDIA = nT / pT;
    printf("MEDIA = %.5lf\n", MEDIA);

    return 0;
}