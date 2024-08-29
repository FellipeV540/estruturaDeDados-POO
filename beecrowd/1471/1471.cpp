#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, R;
    while (cin >> N >> R) {
        vector<bool> returned(N + 1, false);
        int id;
        for (int i = 0; i < R; i++) {
            cin >> id;
            returned[id] = true;
        }
      
        bool allReturned = true;
        for (int i = 1; i <= N; i++) {
            if (!returned[i]) {
                cout << i << " ";
                allReturned = false;
            }
        }
      
        if (allReturned) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
