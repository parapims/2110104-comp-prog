#include <iostream>
#include <string>
using namespace std;
int main(){
    string sen; cin >> sen;
    int pos[sen.size()];
    int c = 0, C = 0 ,x=0;
    sen = " "+sen;
    if ((sen[1]>=97 && sen[1]<=122) || (sen[1]>=65 && sen[1]<= 90)) {pos[c] = 1; c++;}
    for (int i =1;i< sen.size();i++){
        if (sen[i]>='0'&&sen[i]<='9'){
            x++;
        }
    }
    if(x==sen.size()-1){cout << sen.substr(1,sen.size()-1);}
    for (int i =2; i< sen.size();i++){
        if(sen[i]>=65 && sen[i]<= 90){ 
            pos[c]=i; 
            c++; 
        }
        if (sen[i]>= '0' && sen[i]<= '9'){
            if ((sen[i-1]>=65 && sen[i-1]<=90) ||(sen[i-1]>=97 && sen[i-1]<=122)  ){
                pos[c] = i;
                c++;
            }
        }
        if((sen[i]>=97 && sen[i]<=122)){
            if(sen[i-1]>='0' && sen[i-1]<='9'){
                pos[c] = i;
                c++;
            }
        }
    }
    
    for (int i = 0; i < c ; i++){
        if (C == 0){cout << sen.substr(pos[i],(pos[i+1]-pos[i])); C++;}
        else {cout << ", "<< sen.substr(pos[i],(pos[i+1]-pos[i]));}
    }
}