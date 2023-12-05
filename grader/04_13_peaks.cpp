#include<iostream>
#include <string>
using namespace std;
int main() {
    int n; cin >> n;
    int count = 0;
    double N[n];
    for (int i = 0; i < n; i++){
        cin >> N[i];
    }
    for(int index = 1; index < n-1;index++){
        if (N[index]> N[index-1] && N[index]>N[index+1]){count++;}
    }
    cout << count;
    return 0;
}