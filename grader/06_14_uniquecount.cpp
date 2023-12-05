#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    vector<int> x;
    vector<int> y;
    while(cin >>n){
        x.push_back(n);
    }
    sort(x.begin(),x.end());
    y.push_back(x[0]);
    for(size_t i = 1;i<x.size();++i){
        if(x[i-1]!=x[i]) {
            y.push_back(x[i]);
        }
    }
    int z=y.size();
    if (z>10) z = 10;
    cout<<y.size()<<"\n";
    for(int i=0;i<z;++i){
        cout << y[i];
        if(i!=z-1) cout << " ";
    }
}