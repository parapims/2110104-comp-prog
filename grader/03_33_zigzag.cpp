#include <iostream>
#include <string>
using namespace std;
int main(){
    int x,y; 
    int min1, min2, max1, max2;
    int c = 0;
    cin >> x;
    while((x != -998) && (x != -999)){
        cin >> y;
        if (c == 0) {min1 = x, min2 = y, max1 = y, max2 = x;}
        if (c % 2 ==0){
            min1 = min(min1,x);
            max1 = max(max1,y);
            min2 = min(min2,y);
            max2 = max(max2,x);
        }
        else {
            min1 = min(min1,y);
            max1 = max(max1,x);
            min2 = min(min2,x);
            max2 = max(max2,y);
        }
        cin >> x;
        c++;
    }
    if (x == -998){cout << min1 << " " << max1;}
    if (x == -999){cout << min2 << " " << max2;}
}