#include <iostream>
#include <string>
using namespace std;
int main(){
    string x;
    while(getline(cin,x)){
        if (x.size()!= 0){
            char y = x[x.size()-1];
            string ans;
            int pos[x.size()];
            int c = 0;
            for(size_t i = 0; i < x.size();i++){
                if(x[i]==y){pos[c] = i; c++;}
            }
            for(int i = 0; i <= c;i += 2){
                ans += x.substr(pos[i]+1,(pos[i+1]-pos[i]-1));
            }
            cout << ans << "\n";
        }
        else break;
    }
}