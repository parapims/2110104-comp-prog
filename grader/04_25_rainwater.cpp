#include <iostream>
#include <string>
#include<cmath>
using namespace std;
int main() {
    int n; cin >> n;
    int x[n];
    int sum = 0;
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    int maxl = 0,maxr = 0,h;
    for (int i = 1; i < n-1; i++){
        for (int j = 0 ; j < i;j++){
            maxl = max(maxl,x[j]);
        }
        for (int j = i+1; j < n;j++){
            maxr = max(maxr,x[j]);
        }
        if (x[i]>maxl){maxl = x[i];}
        if (x[i]>maxr){maxr = x[i];}
        if(maxr==x[i]&&maxl == x[i]){sum += 0;}
        else {
            h = min(maxr, maxl);
            sum += h - x[i];}
        maxl = 0; maxr = 0;
    }
    cout << sum;
}