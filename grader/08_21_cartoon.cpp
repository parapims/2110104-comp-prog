#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,vector<string> > cartoon;
    string name,animal;
    vector<string> check;
    while (cin>>name>>animal){
        if(find(check.begin(),check.end(),animal)==check.end()) check.push_back(animal);
        if(cartoon.find(animal)==cartoon.end())
            cartoon[animal]=vector<string>();
        cartoon[animal].push_back(name);
    }
    for (size_t i = 0;i<check.size();++i){
        auto itr = cartoon.begin();
        for(auto end = cartoon.end();itr != end;++itr){
            if(check[i]==(*itr).first){
                cout << (*itr).first<< ": ";
                for (auto e : (*itr).second){
                    cout << e <<' ';
                }
                cout <<"\n";
            }
        }
    }
    return 0;
}