#include<iostream>
#include<string>
using namespace std;

int main(){
   int n; cin >> n;
   if(n > 0){
    cout << "positive" << endl;
   } 
   else if (n < 0){
    cout << "negative"<< endl;
   }
   else{
    cout << "zero"<< endl;
   }
   if (n % 2 ==0){
    cout << "even";
   }
   else {
    cout << "odd";
   }
}