#include <iostream>
#include <cmath>
#include <string>
using namespace std;

long gcd(long a, long b){
    if (b == 0) return a;
    return gcd(b, a%b);
}

int main(){
    int a;
    string b, c ;
    cin >> a;
    cin >> b;
    cin >> c;
    string x = b+c;
    int X = stoi(x);
    int n1 = x.length();
    int n2 = b.length();
    int B = stoi(b);
    int result = X - B;
    int result1 = (pow(10,n1)- pow(10,n2));
    int A = gcd(result, result1);
    cout << ((a*result1)+result)/A << " / " << result1/A;
}