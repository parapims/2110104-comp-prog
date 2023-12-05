#include <bits/stdc++.h>
using namespace std;
int main(){
    string p; cin>> p;
    int a; cin >> a;
    int n = 0;
    int w = stoi(p.substr(0,1)); string x = p.substr(1,1);
    string y = p.substr(2,1); int z = stoi(p.substr(4,3)); string sz;
    if (a >= 26000*26){
        w += a/(26000*26);
        a %= 26000*26;
    }
    if (a >= 26000){
        n = a/(26000);
        x = char(x[0]+n);
        if (x[0] >'Z'){
            x[0] -= 26;
            w++;
        }
        a %= 26000;
        n = 0;
    }
    if (a>=1000){
        n = a/1000;
        y = char(y[0]+n);
        if (y[0] >'Z'){
            y[0] -=26;
            x[0]++;
            if (x[0] >'Z'){
                x[0] -= 26;
                w++;
            }
        }
        a %= 1000;
    }
    if (a<1000){
        z +=a;
        if (z>=1000){
            z %= 1000;
            y[0] = char(y[0]+1);
            if (y[0] >'Z'){
                y[0] -=26;
                x[0]++;
                if (x[0] >'Z'){
                    x[0] -= 26;
                    w++;
                }
            }
        }
        sz = to_string(z);
        while(sz.length() < 3){
            sz = "0"+sz;
        }
    }
    cout << w << x << y << "-" << sz;
    
}