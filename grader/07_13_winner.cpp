#include <bits/stdc++.h>
using namespace std;
int main(){
    string win,lose;
    int c = 0;
    set <string>w;
    set <string>l;
    while (cin>>win>>lose){
        w.insert(win);
        l.insert(lose);
    }
    auto itr = w.begin();
    for(auto end = w.end();itr!=end;++itr){
        if(l.find(*itr) == l.end()) cout << *itr << ' ';
        else c++;
    }
    if (c==w.size()) cout << "None";
}