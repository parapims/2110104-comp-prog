#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    string name,nickname;
    map<string,string> x;
    for (int i =0;i<n;++i){
        cin >> name >> nickname;
        x[name]=nickname;
        x[nickname]=name;
    }
    string Name;
    int N; cin>>N;
    for(int i = 0;i<N;++i){
        cin >> Name;
        if(x.find(Name)!=x.end()) cout << x[Name]<<"\n";
        else cout << "Not found"<<"\n";
    } 
}