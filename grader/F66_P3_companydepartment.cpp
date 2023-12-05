#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,M; cin >> N >> M;
    map <string,set<string> > list;
    map <string,string> check;
    string name,dept;
    for (int i = 0;i<N;++i){
        cin >> name>>dept;
        if (list.find(dept)== list.end()){
            list[dept]=set<string>();
        }
        list[dept].insert(name);
        check[name]=dept;
    }
    int req; 
    string x,y;
    for (int i = 0;i<M;++i){
        cin >> req >> x >> y;
        pair<string,string> order = make_pair(x,y);
        if (req == 1){
            if(check[order.first]!=order.second){
                if(list.find(order.second)==list.end()){
                    set<string> t;
                    list[order.second] = t;
                }
                list[order.second].insert(order.first);
                list[check[order.first]].erase(order.first);
                check[order.first] = order.second;
            }
        }
        else if(req==2){
            if(list.find(order.second)==list.end()){
                set <string> t;
                list[order.second] = t;
            }
            for (auto e : list[order.first]){
                list[order.second].insert(e);
                check[e]=order.second;
            }
            list.erase(order.first);
        }
    }
    for(auto e:list){
        cout << e.first<< ": ";
        for (auto f:e.second) cout << f <<' ';
        cout << "\n";
    }
    return 0;
}