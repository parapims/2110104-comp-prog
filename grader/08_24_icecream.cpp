#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,N; cin>>n;
    map<string,pair<double,double> >icecream;
    double total=0,Max=0;
    for(int i = 0;i<n;i++){
        string x; double y;
        cin >>x>>y;
        icecream[x]= make_pair(y,0);
    }
    cin >> N;
    for(int i =0;i<N;++i){
        string a; double b;
        cin >>a>>b;
        if(icecream.find(a)!= icecream.end()){
            total += (icecream[a].first)*b;
            icecream[a].second += (icecream[a].first)*b;
            Max = max(Max,icecream[a].second );
        }
    }
    if (total == 0) cout << "No ice cream sales";
    else {cout <<"Total ice cream sales: " << total<<"\n"<<"Top sales: ";
        for(auto e : icecream){
            if ((e.second).second==Max) cout << e.first<<' ';
        }
    }
}