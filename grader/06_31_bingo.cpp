#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> bingo;
    string B; getline(cin,B);
    string b;
    istringstream iss(B);
    while (iss>>b) bingo.push_back(b);
    vector <vector<string> > num;
    vector <vector<bool> > status = {{false}};
    status[2][2] = true;
    for(int i = 0;i<5;++i){
        int c = 0;
        vector <string> temp;
        getline(cin,B);
        string n;
        istringstream iss(B);
        while (iss>>n){
            temp.push_back(bingo[c]+n);
            c++;
        }
        num.push_back(temp);
    }
    string x;
}