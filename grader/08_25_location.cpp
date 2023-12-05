#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0; cin>>n;
    map <string, vector<string> > id;
    vector <string> order; 
    for (int i=0;i<n;++i){
        string x, w; vector<string> y;
        cin >>x;
        order.push_back(x);
        while (cin>>w){
            if(w=="*") break;
            else y.push_back(w);
        }
        id[x]=y;
    }
    cin.ignore();
    string x; cin >>x;
    vector <string> check; vector<string> check1;
    for(auto e:id[x]) check.push_back(e);
    for (size_t i =0;i<order.size();++i){
        if(order[i]!=x){
            for(size_t j = 0;j<check.size();++j){
                for(auto e:id[order[i]])
                    if(e==check[j]&&find(check1.begin(),check1.end(),order[i])==check1.end()) {check1.push_back(order[i]); cout <<">> "<<order[i]<<"\n"; c++;}
            }
        }
    }
    if(c==0) cout <<">> Not Found";
    return 0;
}