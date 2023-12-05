#include <bits/stdc++.h>
using namespace std;
string upgrade(string g){
    string G[]={"F","D","D+","C","C+","B","B+","A","A"};
    for (int i = 0;i<9;++i){
        if (G[i]==g) return G[i+1];
    }
    return g;
}
int main(){
    vector<pair<string,string> > w;
    string x,y;
    while (cin >> x){
        if(x=="q") break;
        else {
            cin >> y;
            w.push_back(make_pair(x,y));
        }
    }
    string z;
    while (cin>>z){
        for (int i = 0;i<w.size();++i){
            if (w[i].first == z){
                w[i].second = upgrade(w[i].second);
            }
        }
    }
    for (int i = 0; i<w.size();++i){
        cout << w[i].first <<" "<< w[i].second<<"\n";
    }
}