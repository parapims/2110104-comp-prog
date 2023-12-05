#include <iostream>
#include <string>
using namespace std;
int main(){
    string sen; getline(cin,sen);
    int c[26];
    for (int j = 0 ; j < 26; j++){ c[j] = 0; }
    for (size_t i = 0; i < sen.size(); i++){
        if(sen[i]>= 65 && sen[i]<=90){c[sen[i]-65] +=1;}
        if(sen[i]>= 97 && sen[i]<=122){c[sen[i]-97] +=1;}
    }
    for (size_t i = 0; i < 26; i++){
        if (c[i] != 0){cout << char(i+97) << " -> " << c[i] << "\n" ;}
    }
    return 0;
}