#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int x[n*n];
    int c = 0, pos;
    for (int i = 0; i < n*n; i++){
        cin >> x[i];
    }
    for (int i = 0; i < n*n; i++){
        if(x[i]==0){pos = ((i+1)/n)-1;}
    }
    for (int i = 0; i< n*n; i++){
        for(int j = i; j< n*n; j++){
            if (x[i]>x[j]){c++;}
        }
    }
    if(n%2 != 0){
        if (c % 2 ==0){cout << "YES";}
        else {cout << "NO";}
    }
    else{
        if (c % 2 != 0){
            if ( pos % 2 !=0){cout << "YES";}
            else {cout << "NO";}
        }
        else {
            if(pos % 2 == 0){cout << "YES";}
            else{cout << "NO";}}
    }
}