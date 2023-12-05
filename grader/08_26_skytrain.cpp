#include<bits/stdc++.h>
using namespace std;
int main(){
    multimap<string,string> station;
    string x,check;
    set<string> ans;
    vector<string> y;
    while(cin>>x){
        y.push_back(x);
    }
    if(y.size()==1) cout << y[0];
    else{
    check = y[y.size()-1];
    for(size_t i =0;i<y.size()-2;i+=2){
        station.insert(make_pair(y[i],y[i+1]));
    }
    auto itr = station.begin();
    for(auto end = station.end();itr != end;++itr){
        if((*itr).first == check){
            ans.insert((*itr).second);
            auto itr1 = station.begin();
            for(auto end = station.end();itr1 != end;++itr1){
                if((*itr1).first==(*itr).second) ans.insert((*itr1).second);
                if((*itr1).second==(*itr).second) ans.insert((*itr1).first);
            }
        }
        if((*itr).second == check){
            ans.insert((*itr).first);
            auto itr1 = station.begin();
            for(auto end = station.end();itr1 != end;++itr1){
                if((*itr1).first==(*itr).first) ans.insert((*itr1).second);
                if((*itr1).second==(*itr).first) ans.insert((*itr1).first);
            }
        }
    }
    for(auto j : ans) cout << j <<"\n";
    if (ans.size()==0) cout << check;
    }
    return 0;
}