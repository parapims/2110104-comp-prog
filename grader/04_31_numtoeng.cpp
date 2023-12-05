#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string w[] ={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string x[] ={"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string y[] ={"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string z[] ={"trillion", "billion", "million", "thousand",""};
    int ans[5] = {0,0,0,0,0};
    long long int n; cin >> n;
    if (n >= pow(10,12)){ans[0]= n/(long long int)pow(10,12); n %=(long long int)pow(10,12);}
    if (n >= pow(10,9)){ans[1]=n/(long long int)pow(10,9); n %= (long long int)pow(10,9);}
    if (n >= pow(10,6)){ans[2]=n/(long long int)pow(10,6); n %= (long long int)pow(10,6);}
    if (n >= pow(10,3)){ans[3]=n/(long long int)pow(10,3);n %= (long long int)pow(10,3);} 
    if (n < pow(10,3)) {ans[4] = n ;}
    //for (int i =0 ; i<5;i++){cout << ans[i]<<" ";}
    if (ans[4]==0){cout << "zero";}
    for (int i = 0; i<5; i++){
        if (ans[i] == 0){continue;}
        if (ans[i] >= 100){
            int a = ans[i]/100; ans[i] %= 100;
            for (int j = 0; j<10;j++){
                if(a == j){cout << w[j] << " " << "hundred"<<" ";}
            }
        }
        if (ans[i] >=10){
            int b = ans[i]/10; int c = ans[i]%10;
            if(b == 1){
                for (int j = 0; j<10; j++){
                    if (c == j){cout << x[j]<< " ";}
                }
            }
            else if (b > 1) {
                for (int j = 2; j<10; j++){
                    if (b == j){ cout << y[j-2] << " "; ans[i]%=10;}
                }
            }
        }
        if (ans[i] < 10 ){
            for (int j = 1;j<10;j++){
                if(ans[i] == j){cout << w[j] << " ";}
            }
        }
        cout << z[i] << " ";
    }
}