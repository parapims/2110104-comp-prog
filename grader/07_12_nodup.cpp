#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,c=0;
    bool w = false;
    set<int> y;
    // int z; cin>>z;
    // y.insert(z);
    while(cin>>x){
        if(y.find(x)==y.end()){
            y.insert(x);c++;
        }
        else {w =true;break;}
    }
    if(w) cout << c+1;
    else cout << -1;
    return 0; 
}