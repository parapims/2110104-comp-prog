#include <iostream>
#include <string>
using namespace std;

int main(){
    string number; cin >> number;
    int n = number.length();
    string a = number.substr(0,2);
    if (n == 10){
        if (a == "06" || a == "08" || a=="09"){
            cout << "Mobile number";
        }
        else {
            cout << "Not a mobile number";
        }
    }
    else {
        cout << "Not a mobile number";
    }
}