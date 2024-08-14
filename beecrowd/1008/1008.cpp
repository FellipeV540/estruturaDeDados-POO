#include <iostream>
using namespace std;

int main(){
    int N, H;
    cin >> N;
    cin >> H;

    float V;
    cin >> V;

    float SALARY = H * V;

    printf("NUMBER = %.li\n", N);
    printf("SALARY = U$ %.2lf\n", SALARY);

    return 0;
}