#include <iostream>
#include <string>
using namespace std;
int main() {
    string pass;
    while (getline(cin, pass)){
        if (pass.size() == 0) {break;}
        if (pass.size()< 8){ cout << ">> " << "invalid\n"; continue;}
        bool up = false, low = false, num = false, spec = false;
        for (int i = 0; i < pass.size();i++){
            if(pass[i] >= '0' && pass[i]<= '9'){num =true;}
            if (pass[i] >= 'a' && pass[i] <= 'z'){low =true;}
            if(pass[i] >= 'A' && pass[i] <= 'Z'){up =true;}
            if((pass[i] >= 33 && pass[i] <= 47)|| (pass[i] >= 58 && pass[i] <= 64)|| (pass[i] >= 91 && pass[i] <= 96)|| (pass[i] >= 123 && pass[i] <= 127)){spec =true;}
        }
        if(up &&low&&num){
            if (spec && pass.size() >= 12){cout << ">> " << "strong\n";}
            else if (pass.size() >= 8){cout << ">> " << "weak\n";}
            else{cout << ">> " << "invalid\n";}
        }
        else{cout << ">> " << "invalid" <<endl;}
    }
}