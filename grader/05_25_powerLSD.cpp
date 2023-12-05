#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string a,n;
    int ans;
    while(cin >> a >> n){
        int N;
        int A = stoi(a.substr(a.size()-1,1));
        if(n.size()>1){N = stoi(n.substr(n.size()-2,2));}
        else{N = stoi(n);}
        int x = N%4;
        if(x == 0){x = 4;}
        if(N == 0){ans = 1;}
        else {ans = pow(A,x);}
        cout << ">> "<< ans%10 << endl;
    }
    return 0;
}