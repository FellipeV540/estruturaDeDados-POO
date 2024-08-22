#include <iostream>
using namespace std;

string Contrario(const string& str) {
    string reversed_str;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i];
    }
    return reversed_str;
}

int main() {
    unsigned long long n;
    cin >> n;

    string str_n = to_string(n);

    cout << Contrario(str_n) << endl;

    return 0;
}
