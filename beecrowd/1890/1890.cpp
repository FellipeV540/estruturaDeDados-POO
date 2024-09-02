        #include <iostream>
        #include <cmath>

        using namespace std;

        int main() {
            int T;
            cin >> T;

            while (T--) {
                int C, D;
                cin >> C >> D;

                int placas_distintas = 0;

                if (C > 0 || D > 0) {
                    placas_distintas = pow(26, C) * pow(10, D);
                }

                cout << placas_distintas << endl;
            }

            return 0;
        }
