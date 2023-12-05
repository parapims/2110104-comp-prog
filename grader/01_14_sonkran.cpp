#include <iostream>
#include <cmath>
using namespace std;
 int main() {
    int year, y, result;
    cin >> year;
    y = (year-543) % 100;
    int x = floor(y/4);
    result = (y + x + 11 ) % 7;
    cout<< result << endl;
 }