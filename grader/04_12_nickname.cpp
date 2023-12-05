#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; cin >> n;
    string name;
    string list[] = {"Robert", "Dick", "William", "Bill", "James", "Jim", "John", "Jack", "Margaret", "Peggy", "Edward", "Ed", "Sarah", "Sally", "Andrew", "Andy", "Anthony", "Tony", "Deborah", "Debbie"};
    int c = 0;
    for (int i = 0; i < n; i++){
        cin >> name;
        for (int index = 0; index < 20; index++){
            if (list[index]==name){
                c++;
                if (index % 2 == 0){
                    cout << list[index+1]<< "\n";
                }
                else { cout << list[index-1] << "\n";}
                break;
            }
        }
        if(c==0){cout << "Not found\n";}
        c = 0;
    }
}