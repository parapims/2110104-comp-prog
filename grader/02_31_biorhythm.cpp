#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int d1, m1, Y1; cin >> d1 >> m1 >> Y1;
    int d2, m2, Y2; cin >> d2 >> m2 >> Y2;
    int Y = Y2 - Y1 - 1;
    int D = 0;
    D += Y * 365;
    int y2 = Y2-543;
    int m21, m22, t;
    if (y2 > 2640){
        m22 = 28;
    }
    else{
        if (y2%400 ==0 || (y2 %4==0 && y2 % 100 != 0)){
        m22 = 29;
        }
        else{
        m22 = 28;
        }
    }
    if (m2 ==1){
        t = d2;
    }
    else if (m2 ==2){
        t = d2 + 31;
    }
    else if (m2 == 3){
        t = d2 + m22 + 31;
    }
    else if (m2 == 4){
        t = 31 + m22 + 31 + d2;
    }
    else if (m2 == 5){
        t = 31 + m22 + 31 + 30 + d2;
    }
    else if (m2 == 6){
        t = 31 + m22 + 31 + 30 + d2 + 31;
    }
     else if (m2== 7){
        t = 31 + m22 + 31 + 30 + d2 + 31 + 30;
    }
    else if (m2 == 8){
        t = 31 + m22 + 31 + 30 + d2 + 31 + 30 + 31;
    }
    else if (m2 == 9){
        t = 31 + m22 + 31 + 30 + d2 + 31 + 30 + 31 +31;
    }
    else if (m2 == 10){
        t = 31 + m22 + 31 + 30 + d2 + 31 + 30 + 31 +31 + 30;
    }
    else if (m2 == 11){
        t = 31 + m22 + 31 + 30 + d2 + 31 + 30 + 31 +31 + 30 + 31;
    }
    else if (m2 == 12){
        t = 31 + m22 + 31 + 30 + d2 + 31 + 30 + 31 +31 + 30 + 31 + 30;
    }
    D += (t-1);
    int y1 = Y1-543;
    int allday;
    if (Y > 2640){
        m21 = 28;
        allday = 365;
    }
    else{
        if (y1%400 ==0 || (y1 %4==0 && y1 % 100 != 0)){
        m21 = 29;
        allday = 366;
        }
        else{
        m21 = 28;
        allday = 365;
    }
    if (m21 ==1){
        t = d1;
    }
    else if (m1 ==2){
        t = d1 + 31;
    }
    else if (m1 == 3){
        t = d1 + m21 + 31;
    }
    else if (m1 == 4){
        t = 31 + m21 + 31 + d1;
    }
    else if (m1 == 5){
        t = 31 + m21 + 31 + 30 + d1;
    }
    else if (m1 == 6){
        t = 31 + m21 + 31 + 30 + d1 + 31;
    }
     else if (m1 == 7){
        t = 31 + m21 + 31 + 30 + d1 + 31 + 30;
    }
    else if (m1 == 8){
        t = 31 + m21 + 31 + 30 + d1 + 31 + 30 + 31;
    }
    else if (m1 == 9){
        t = 31 + m21 + 31 + 30 + d1 + 31 + 30 + 31 +31;
    }
    else if (m1 == 10){
        t = 31 + m21 + 31 + 30 + d1 + 31 + 30 + 31 +31 + 30;
    }
    else if (m1 == 11){
        t = 31 + m21 + 31 + 30 + d1 + 31 + 30 + 31 +31 + 30 + 31;
    }
    else if (m1 == 12){
        t = 31 + m21 + 31 + 30 + d1 + 31 + 30 + 31 +31 + 30 + 31 + 30;
    }
    D += (allday - t + 1) ;
    }
    double phy = round(sin(((2*M_PI*D)/23))*100.0)/100.0;
    double emo = round(sin(((2*M_PI*D)/28))*100.0)/100.0;
    double intell = round(sin(((2*M_PI*D)/33))*100.0)/100.0;
    cout << D << " " << phy << " " << emo << " " << intell;
}