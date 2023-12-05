#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double xe,ye,re,rp,xm,ym;
    double A,B,C,a,b,c;
    cin >> xe;
    cin >> ye;
    cin >> re;
    cin >> rp;
    cin >> xm;
    cin >> ym;
    c = re-rp;
    A = xm-xe;
    B = ym-ye;
    C = sqrt(pow(A,2)+pow(B,2));
    a = round((c/C)*A);
    b = round((c/C)*B);
    double xp = xe + a;
    double yp = ye + b;
    cout << xp << " " << yp << endl;
}