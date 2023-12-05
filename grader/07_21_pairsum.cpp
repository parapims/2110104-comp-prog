#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,y,c=0; cin>>k;
    set<int> x;
    while(cin>>y){
        x.insert(y);
    }
    auto itr = x.begin();
    for(auto end=x.end();itr!=end;++itr){
        if(x.find(k-(*itr))!=x.end()) c++;
    }
    cout << c/2;
    return 0;
}