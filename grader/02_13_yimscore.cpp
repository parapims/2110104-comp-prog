#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double s; cin >> s;
    double n1; cin >> n1;
    double n2; cin >> n2;
    double n3; cin >> n3;
    double max = s;
    double min = s;
    if (n1 >= max){
       max = n1;
    }
    if (n2 >= max){
       max = n2;
    }
    if (n3 >= max){
       max = n3;
    }
    if (n1 <= min){
        min = n1;
    }
    if (n2 <= min){
        min = n2;
    }
    if (n3 <= min){
        min = n3;
    }
    cout << round(((s+n1+n2+n3)-(max+min))/2*100.0)/100.0 << endl;
}