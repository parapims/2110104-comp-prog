#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    map <string,int> dept;
    map <double,string> temp;
    map <double,vector<string> > selec;
    map <string,string> final;
    for(int i = 0;i<n;++i){
        string x; int y;
        cin >> x >> y;
        dept[x]=y;
    }
    int N; cin >> N;
    while(N--){
        string w,a,b,c,d; double s;
        vector <string> t;
        cin >> w >> s >> a >> b >> c >> d;
        temp[-s]= w;
        t.push_back(a); t.push_back(b);
        t.push_back(c); t.push_back(d);
        selec[-s]=t;
    }
    auto itr = selec.begin();
    for(auto end = selec.end();itr != end;++itr){
        for(int i = 0;i<4;++i){
            if (dept[((*itr).second)[i]]>0){
                dept[((*itr).second)[i]]--;
                final[temp[(*itr).first]] = ((*itr).second)[i];
                break;
            }
        }
    }
    for (auto e : final){
        cout << e.first << ' ' << e.second << "\n";
    }
    return 0;
}