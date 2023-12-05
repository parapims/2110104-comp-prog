#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
    long long int m,n,sum = 0; cin >> m >> n ;
    long long int lenm = to_string(m).size(),lenn = to_string(n).size();
    if(m ==0){ sum +=1; m=1;}
    if(lenm != lenn){
        sum += ((long long int)pow(10, lenm) - m ) * lenm;
        sum += (n - (long long int)pow(10,lenn-1)+1) * lenn;
        for (int N = lenm +1; N < lenn;N++){
            sum += 9* (long long int)pow(10,N-1)*N;
        }
    }
    else{sum += (n-m+1)*lenm;}
    cout << sum;
}