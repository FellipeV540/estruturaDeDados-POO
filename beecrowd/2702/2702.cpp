#include <iostream>
using namespace std;

int main(){
    int F, B, M;
    cin >> F >> B >> M;
    int Fp, Bp, Mp;
    cin >> Fp >> Bp >> Mp;

    int Fs, Bs, Ms;
    if(Fp > F){
        Fs = Fp - F;
    }
    if(Bp > B){
        Bs = Bp - B;
    }
    if(Mp > M){
        Ms = Mp - M;
    }

    int Total = 0;
    Total = Fs + Bs + Ms;

    cout << Total << endl;

    return 0;
}