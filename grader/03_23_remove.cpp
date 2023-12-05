#include<iostream>
#include <string>
using namespace std;
int main(){
    string s; cin >> s;
    int n; cin >> n;
    s = s+" ";
    char x = s[0];
    int c = 0;
    for (size_t i = 0; i<s.size();i++){
        if (x==s[i]){c++;}
        else{
            x = s[i];
            if(c<n){
                for(int j = 0;j<c;j++){
                    cout << s[i-1];
                }
            }
            c = 1;
        }
    }

}