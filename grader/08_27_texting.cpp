#include <bits/stdc++.h>
using namespace std;
int main(){
    string line;
    vector <vector <string> > text;
    map <string,char> check1;
    check1["2"]=97; check1["22"]=98; check1["222"]=99;
    check1["3"]=100; check1["33"]=101; check1["333"]=102;
    check1["4"]=103; check1["44"]=104; check1["444"]=105;
    check1["5"]=106; check1["55"]=107; check1["555"]=108;
    check1["6"]=109; check1["66"]=110; check1["666"]=111;
    check1["7"]=112; check1["77"]=113; check1["777"]=114; check1["7777"]=115;
    check1["8"]=116; check1["88"]=117; check1["888"]=118;
    check1["9"]=119; check1["99"]=120; check1["999"]=121; check1["9999"]=122;
    check1["0"]=32;
    map <char,string> check2;
    for(auto itr = check1.begin(); itr != check1.end();++itr){
        check2[(*itr).second] = (*itr).first;
        check2[((*itr).second)-32] = (*itr).first;
    }
    while(getline(cin,line)){
        istringstream iss(line);
        string word;
        vector <string> temp;
        while(iss >> word){
            temp.push_back(word);
        }
        text.push_back(temp);
    }
    for(size_t i = 0; i< text.size();++i){
        cout << ">> ";
        if(text[i][0]=="K2T"){
            for (size_t j = 1;j<text[i].size();++j){
                cout << check1[text[i][j]];
            }
            cout << "\n";
        }
        if(text[i][0]=="T2K"){
            for (size_t j = 1;j<text[i].size();++j){
                for (size_t k =0;k<text[i][j].size();++k){
                    if(check2.find(text[i][j][k])!= check2.end()) cout << check2[text[i][j][k]] << ' ';
                }
                if (j<text[i].size()-1) cout << "0"<< ' ';
            }
            cout << "\n";
        }
    }
    return 0;
}