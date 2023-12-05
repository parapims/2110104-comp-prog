#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    map<string,double> result;
    string x; double y;
    for(int i =0;i<n;++i){
        cin >>x>>y;
        result[x]=y;
    }
    int a; cin>> a;
    vector<string> change;
    string c;
    while(cin >> c) change.push_back(c);
    cout << a << ' '<<change[0];
    for (size_t i = 1;i<change.size();++i){
        cout <<" -> ";
        if (change[i-1]!="THB"&&change[i]=="THB"){
            a = a*result[change[i-1]];
        }
        else if(change[i-1]=="THB"&&change[i]!= "THB"){
            a = a/result[change[i]];
        }
        else if(change[i-1]!="THB"&&change[i]!= "THB"){
            a = (a*result[change[i-1]])/result[change[i]];
        }
        cout << a << ' '<<change[i];
    }
    return 0;
}