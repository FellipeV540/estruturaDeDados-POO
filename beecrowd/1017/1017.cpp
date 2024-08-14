#include <iostream>
using namespace std;

int main(){
    int T, Vm;
    cin >> T;
    cin >> Vm;

    double D = T * Vm;
    double G = D / 12;

    printf("%.3lf\n", G);

    return 0;
}