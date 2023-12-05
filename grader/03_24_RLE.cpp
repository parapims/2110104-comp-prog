#include <iostream>
#include <string>
using namespace std;
int main(){
    string n; 
    getline(cin,n);
    int count = 1;
    for (unsigned int i = 0 ; i < n.size(); i++ ){
        if (n[i]== n[i+1]){
            count++;
        }
        else {
            if (i == n.size()-1) {cout << n[i] << " " << count;}
            else {cout << n[i] << " " << count<< " "; count = 1;}
        }
        
    }
       
}
