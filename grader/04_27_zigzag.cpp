#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int lis1[n],lis2[n];
    int c = 0;
    for (int i = 0; i < n; i++){
        if (c % 2 == 0){cin >> lis1[i] >> lis2[i];}
        else {cin >> lis2[i] >> lis1[i];}
        c++;
    }
    int max1 = lis1[0], max2 = lis2[0], min1 = lis1[0], min2 = lis2[0];
    for(int index = 0; index < n; index++){
        if(lis1[index]>max1 ){max1 = lis1[index];}
        if(lis2[index]>max2 ){max2 = lis2[index];}
        if(lis1[index]<min1 ){min1 = lis1[index];}
        if(lis2[index]<min2 ){min2 = lis2[index];}
    }
    string a; cin >> a;
    if (a == "Zig-Zag"){cout << min1 << " " << max2;}
    if (a == "Zag-Zig"){cout << min2 << " " << max1;}
    return 0;
}