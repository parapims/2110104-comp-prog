#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string n;
    double n12;
    cin >> n;
    n12 = (11-((13*(n[0]-'0'))+(12*(n[1]-'0'))+(11*(n[2]-'0'))+ (10*(n[3]-'0'))+(9*(n[4]-'0'))+(8*(n[5]-'0'))+(7*(n[6]-'0'))+(6*(n[7]-'0'))+(5*(n[8]-'0'))+(4*(n[9]-'0'))+(3*(n[10]-'0'))+(2*(n[11]-'0')))%11)%10;
    cout<<n[0]<<"-"<<n.substr(1,4)<<"-"<<n.substr(5,5)<<"-"<<n.substr(10,2)<<"-"<<n12;
}