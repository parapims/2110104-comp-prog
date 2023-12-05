#include <iostream>
using namespace std;

int main(){
    long long int n; cin >> n;
    for (int k = 2; k<= n; k++){
        while(n % k == 0){
            n /= k;
            if (n != 1){
                cout << k <<"*";
            }
            else {cout << k;}
        }
    }
}