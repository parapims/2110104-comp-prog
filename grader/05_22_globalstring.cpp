#include <iostream>
#include<string>
using namespace std;
int main(){
    string x,y; cin >> x >> y;
    string tempx = x, tempy = y;
    int maxright = 0,c = 0;
    string ansx,ansy;
    int m = min(x.size(),y.size());
    for (int i = 0;i<m;++i){
        if (x[i]==y[i]) c++;
        ansx = x; ansy = y;
    }
    maxright = max(maxright,c);
    for(size_t i = 1;i<y.size();++i){
        c = 0;
        tempx = '-' + tempx;
        for(size_t j = i;j<min(tempx.size(), y.size());++j){
            if(tempx[j]==tempy[j]) c++;
        }
        if(c>maxright) {
            maxright = c;
            ansx = tempx;
            ansy = tempy;
        }
    }
    tempx = x; tempy = y;
    for(size_t i = 1;i<x.size();++i){
        c = 0;
        tempy = '-' + tempy;
        for(size_t j = i; j<min(tempy.size(), x.size());++j){
            if(tempx[j]==tempy[j]) c++;
        }
        if(c>maxright) {
            maxright = c;
            ansx = tempx;
            ansy = tempy;
        }
    }
    cout << ansx << "\n" << ansy << "\n" << maxright << endl;
    return 0;
}
