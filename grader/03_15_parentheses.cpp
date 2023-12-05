#include <iostream>
#include <string>
using namespace std;
int main(){
    string sen;
    getline(cin,sen);
    int i =0;
    while(i < sen.size()){
        if (sen[i] == '('){sen[i] ='[';}
        else if (sen[i] == '['){sen[i] ='(';}
        else if (sen[i] == ')'){sen[i] =']';}
        else if (sen[i] == ']'){sen[i] =')';}
        i++;
    }
    cout << sen;
}