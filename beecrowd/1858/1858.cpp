#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int min_hits = 21;
    int min_index = 1;

    for (int i = 1; i <= N; i++) {
        int Ti;
        cin >> Ti;

        if (Ti < min_hits) {
            min_hits = Ti;
            min_index = i;
        }
    }

    cout << min_index << endl;

    return 0;
}
