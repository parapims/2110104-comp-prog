#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y; int c = 0;
    multiset<char> m; multiset<char> n;
    getline(cin,x);
    for(char i:x){
        if(i!=' ') m.insert(tolower(i));
    }
    getline(cin,y);
    for(char j:y){
        if(j !=' ') n.insert(tolower(j));
    }
    // if(m.size()!= n.size()) cout << "NO";
    // else{
    //     auto itr1 = m.begin(), itr2 = n.begin();
    //     for(auto end = m.end(); itr1!= end;++itr1){
    //         if (*itr1 == *itr2){c++;itr2++;}
    //     }
    //     if(c==m.size()) cout << "YES";
    //     else cout << "NO";
    // }
    if (m==n) cout << "YES";
    else cout << "NO";
    return 0;
}