#include <iostream>
#include <string>

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int convertACMToDecimal(const string& acmNumber) {
    int result = 0;
    int length = acmNumber.length();

    for (int i = 0; i < length; ++i) {
        int digit = acmNumber[length - i - 1] - '0';  // Converte o caractere para um número inteiro
        result += digit * factorial(i + 1);
    }

    return result;
}

int main() {
    string acmNumber;
    while (cin >> acmNumber && acmNumber != "0") {
        cout << convertACMToDecimal(acmNumber) << endl;
    }
    return 0;
}
