#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<double,pair<string ,double> > > w;
    string x; double y;
    while (true){
        cin >> x;
        if(x=="END") break;
        else {
            cin >> y;
            w.push_back(make_pair(0,make_pair(x,y)));
        }
    }
    cin.ignore();
    string z;
    while (cin>>z){
        for (size_t i = 0;i<w.size();++i){
            if(z==w[i].second.first){
                w[i].first -= w[i].second.second;
            }
        }
    }
    sort(w.begin(),w.end());
    int c = 0;
    for(size_t i = 0;i<w.size();++i){
        if(w[i].first < 0) c++;
    }
    if(c > 3) c= 3;
    if (c == 0) {cout << "No Sales";}
    else {
        for(int i = 0;i<c;++i){
            if (c == 0) {cout << "No Sales"; break;}
            else cout << w[i].second.first << " "<< -(w[i].first)<< "\n";
        }
    }
    return 0;
}