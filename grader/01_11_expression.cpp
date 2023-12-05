#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cin >> x;
    double Y = (pow(x,sqrt(log(pow(x+1,2)))))/(10-x);
    double y = round(Y*1e6)/1e6;
    cout << y;
}