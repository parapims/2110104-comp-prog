#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> x;
    x.push_back(n);
    while(n!=1){
        if (n%2==0) {n /=2; x.push_back(n);}
        else {n = 3*n+1; x.push_back(n);}
    }
    if (x.size()>15){
        for (size_t i = x.size()-15;i<x.size();++i){
            cout << x[i];
            if(i != x.size()-1) cout << "->";
        }
    }
    else{
        for (size_t i = 0;i<x.size();++i){
            cout << x[i];
            if(i != x.size()-1) cout << "->";
        }
    }
}