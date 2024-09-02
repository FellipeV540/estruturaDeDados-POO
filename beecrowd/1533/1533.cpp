#include <iostream>
#include <map>
using namespace std;

int main() {
    int N, K;

    while (true) {
        cin >> N >> K;
        if (N == 0 && K == 0) break;

        map<int, int> freq;
        int pergunta;

        for (int i = 0; i < N; i++) {
            cin >> pergunta;
            freq[pergunta]++;
        }

        int count = 0;
        for (auto &pair : freq) {
            if (pair.second >= K) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
