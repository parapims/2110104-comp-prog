#include <iostream>
#include <string>
using namespace std;

int main () {
    string n; 
    getline(cin, n);
    int num[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int c = 0;
    
    for (size_t i = 0; i < n.size(); i++) {
        if (n[i] >= '0' && n[i] <= '9') {
            int digit = n[i] - '0'; // Convert character to integer
            num[digit] = 1;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        if (num[i] == 0){
            if (c==0){ cout << i; c=1;}
            else cout << "," << i;
        }
    }
    if (c==0){cout << "None";}
    return 0;
}

