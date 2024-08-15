#include <iostream>
using namespace std;

int main() {
    int N, fatorial;
    cin >> N;
    
    fatorial = 1;
    if (N > 0 && N < 13){
        for(int i = 0; i < N; i++){
            fatorial = fatorial * (N - i);
        }
    }
    cout << fatorial << endl;
    return 0;
}
