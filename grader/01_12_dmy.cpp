#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string dmy;
    string day, year;
    cin >> dmy;
    day = dmy.substr(0, 2);
    int d = stoi(day);
    year = dmy.substr(6, 4);
    int y = stoi(year)-543;
    string month = dmy.substr(3,2);
    int mo = stoi(month);
    string Mo = "JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC";
    month = Mo.substr((mo - 1)*3,3);
    cout << month << " " << d << ", " << y;
}