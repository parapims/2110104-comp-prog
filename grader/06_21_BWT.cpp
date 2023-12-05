#include<bits/stdc++.h>
using namespace std;
int main(){
    string x; cin>>x;
    string y = x + "$";
    int len = y.size();
    vector<string> z;
    z.push_back(y);
    for (int i = 1;i<len;++i){
        y = y.substr(1,len-1)+y[0];
        z.push_back(y);
    }
    sort(z.begin(),z.end());
    for(int i = 0;i<len;++i){
        string w = z[i];
        cout << w[len-1];
    }
    return 0;
}