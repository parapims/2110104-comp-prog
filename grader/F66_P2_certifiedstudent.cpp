#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >>n;
    map < int, vector<string> > fn;
    map <string,int > temp;
    while(n--){
        int score; string name;
        cin >> name >> score;
        if(temp.find(name) != temp.end()){
            if (temp[name] < score) temp[name] = score;
        }
        else temp[name]=score;
        
    }
    for (auto e: temp){
        if (fn.find(-(e.second))==fn.end()){
             vector <string> t;
             fn[-(e.second)] = t;
        }
        fn[-(e.second)].push_back(e.first);
        sort(fn[-(e.second)].begin(),fn[-(e.second)].end());
    }
    int N; cin >> N;
    int c = 0;
    for(auto e : fn){
        if (c == N) break;
        cout << -(e.first)<< ' ';
        for (auto f : e.second) cout << f << ' ';
        cout << "\n";
        c++;
    }
    return 0;
}