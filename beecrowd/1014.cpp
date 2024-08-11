#include <iostream>
using namespace std;

int main(){
    double X, Y;
    cin >> X;
    cin >> Y;

    double consumo = X / Y;
    printf("%.3lf km/l\n", consumo);

    return 0;
}