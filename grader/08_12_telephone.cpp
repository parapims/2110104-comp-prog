#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    string name,last,phonenum,Name;
    map<string,string>x;
    for (int i =0;i<n;++i){
        cin >> name >> last >> phonenum;
        Name = name +" "+last;
        x[Name]=phonenum;
        x[phonenum]=Name;
    }
    int N; cin >>N;
    cin.ignore();
    string ans;
    for (int i =0;i<N;++i){
        getline(cin,ans);
        if(x.find(ans)!=x.end()) cout << ans << " --> "<< x[ans]<<"\n";
        else cout << ans << " --> "<< "Not found"<<"\n";
    }
}