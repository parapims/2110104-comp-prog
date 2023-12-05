#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int>genre;
    map<int,string>total;
    string w,x,y,z;
    int m,c=0;
    while(cin >>w>>x>>y>>z){
        m = stoi(z.substr(0,z.size()-3))*60+stoi(z.substr(z.size()-2,2));
        if(genre.find(y)==genre.end()) genre[y]=m;
        else genre[y] += m;
    }
    for (auto e:genre)
        total[-(e.second)]=e.first;
    for(auto itr = total.begin();itr!=total.end();++itr){
        if (c<3) 
            cout << (*itr).second << " --> "<< (-((*itr).first))/60 <<':' << (-((*itr).first))%60<<"\n";
        else break;
        c++;
    }
}