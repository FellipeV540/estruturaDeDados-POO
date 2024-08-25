#include <iostream>
using namespace std;

int main(){
    int N, R[10000], mary, john;
    cin >> N;
    while(N >= 1 && N <= 10000){
        mary = john = 0;
        for (int i = 0; i < N; i++){
            cin >> R[i];
        }
        for (int j = 0; j < N; j++){

            if (R[j] == 0){
                mary = mary + 1;
            }
            else if (R[j] == 1){
                john = john + 1;
            }
        }
        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
        cin >> N;
    }

    return 0;
}