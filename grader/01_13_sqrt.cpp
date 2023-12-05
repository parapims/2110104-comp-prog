#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    double x1 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
    double x2 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    x1 = round(x1*1e3)/1e3;
    x2 = round(x2*1e3)/1e3;
    cout << x1 << " " << x2 << endl;
}