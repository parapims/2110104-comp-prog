#include <iostream>
#include <string>
using namespace std;
int main() {
    double gpax1, gpax2;
    string code1, code2;
    char comp1, comp2, cal1, cal2, Cal1, Cal2;
    int status1=0, status2=0;
    cin >> code1 >> gpax1 >> comp1 >> cal1 >> cal2;
    cin >> code2 >> gpax2 >> comp2 >> Cal1 >> Cal2;
    if (comp1 == 'A' && cal1 <= 'C' && cal2 <= 'C'){status1 = 1;}
    if (comp2 == 'A' && Cal1 <= 'C' && Cal2 <= 'C'){status2 = 1;}
    if (status1 > status2){cout << code1;}
    if (status2 > status1){cout << code2;}
    if (status1==1 && status2 ==1){
        if (gpax1 > gpax2){
            cout << code1;
        }
        else if (gpax2 > gpax1){
            cout << code2;
        }
        else {
            if (comp1 < comp2){
                cout << code1;
            }
            else if (comp2 < comp1){
                cout << code2;
            }
            else{
                if (cal1 < Cal1){ cout << code1; }
                else if (Cal1 < cal1){ cout << code2; }
                else{
                    if (cal2 < Cal2){ cout<<code1; }
                    else if (cal2 > Cal2){ cout << code2; }
                    else {cout << "Both";}
                }
            }
        }
    }
    else if (status1==0 && status2 ==0) {
        cout << "None";
    }
    return 0;
}