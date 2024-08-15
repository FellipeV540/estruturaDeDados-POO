#include <iostream>
using namespace std;

int main() {
    int A, N;
    cin >> A >> N;

    while (N <= 0) {
        cin >> N;
    }

    int total = 0;
    for (int i = 0; i < N; i++) {
        total += A + i;
    }
    
    cout << total << endl;

    return 0;
}
