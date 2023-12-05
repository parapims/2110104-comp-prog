#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a; cin >> a;
    double u = a; double l = 0;
    double x = (l+u)/2;
    while(abs(a-pow(10,x)) > pow(10,-10)* max(a,pow(10,x))){
        if(pow(10,x)>a){
            u = x; x = (l+u)/2;
        }
        else if (pow(10,x)<a){
            l = x; x = (l+u)/2;
        }
    }
    cout << x;
}