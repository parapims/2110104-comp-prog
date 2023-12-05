#include <bits/stdc++.h>
using namespace std;
int main(){
    string line; getline(cin,line);
    istringstream iss(line);
    int num;
    set <int> A;
    while(iss >> num){
        A.insert(num);
    }
    vector <set<int> > B;
    while (getline(cin,line)){
        istringstream iss(line);
        int n;
        set <int> C;
        while(iss >> n){
            C.insert(n);
        }
        B.push_back(C);
    }
    set <int> U; set <int> D; set <int> I;
    U = A; D = A;
    for(size_t i = 0;i<B.size();++i){
        auto itr = B[i].begin();
        for(auto end = B[i].end();itr != end;++itr){
            U.insert(*itr);
            if (D.find(*itr) != D.end()) D.erase(*itr);
        }
    }
    auto itr = A.begin();
    for(auto end = A.end();itr != end;++itr){
        int c = 0;
        for(size_t i = 0; i<B.size();++i){
            if(B[i].find(*itr)!= B[i].end()) c++;
        }
        if (c==B.size()) I.insert(*itr);
    }
    cout << "U: ";
    for(auto e:U) cout << e << ' ';
    cout <<"\n"<< "I: ";
    if (I.empty()) cout << "empty set";
    else {for (auto e : I) cout << e << ' ';}
    cout << "\n" << "D: ";
    if (D.empty()) cout << "empty set";
    else{for (auto e : D) cout << e << ' ';}
    return 0;
}