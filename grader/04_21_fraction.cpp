#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n; cin >> n;
    double list[n];
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }
    cout << list[0] << endl;
    for (int index = 1; index< n; index++){
        double sum = 0;
        int c = 0;
        for (int j = index; j >= 0 ;j--){
            if (c == 0) {sum += pow(list[j],-1);}
            else if (c == 1){sum += list[j];}
            else {sum = pow(sum,-1)+list[j];}
            c++;
        }
        cout << setprecision(10) << sum << "\n";
    }
}