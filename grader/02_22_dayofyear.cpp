#include <iostream>
using namespace std;

int main(){
    int d, m, Y; cin >> d >> m >> Y;
    int m2, t;
    int y = Y-543;
    if (Y > 2640){
        m2 = 28;
    }
    else{
        if (y%400 ==0 || (y %4==0 && y % 100 != 0)){
        m2 = 29;
        }
        else{
        m2 = 28;
        }
    }
    if (m ==1){
        t = d;
    }
    else if (m ==2){
        t = d + 31;
    }
    else if (m == 3){
        t = d + m2 + 31;
    }
    else if (m == 4){
        t = 31 + m2 + 31 + d;
    }
    else if (m == 5){
        t = 31 + m2 + 31 + 30 + d;
    }
    else if (m == 6){
        t = 31 + m2 + 31 + 30 + d + 31;
    }
     else if (m == 7){
        t = 31 + m2 + 31 + 30 + d + 31 + 30;
    }
    else if (m == 8){
        t = 31 + m2 + 31 + 30 + d + 31 + 30 + 31;
    }
    else if (m == 9){
        t = 31 + m2 + 31 + 30 + d + 31 + 30 + 31 +31;
    }
    else if (m == 10){
        t = 31 + m2 + 31 + 30 + d + 31 + 30 + 31 +31 + 30;
    }
    else if (m == 11){
        t = 31 + m2 + 31 + 30 + d + 31 + 30 + 31 +31 + 30 + 31;
    }
    else if (m == 12){
        t = 31 + m2 + 31 + 30 + d + 31 + 30 + 31 +31 + 30 + 31 + 30;
    }
    cout << t;
}