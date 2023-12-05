#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n; cin >> n;
    int x,c=0;
    vector <int> ans;
    for (int i = 0;i<n;++i){
        cin >> x;
        if(c%2==0){ans.push_back(x);}
        else{ans.insert(ans.begin(),x);}
        ++c;
    }
    while(cin>>x){
        if(x== -1)break;
        if(c%2==0){ans.push_back(x);}
        else{ans.insert(ans.begin(),x);}
        ++c;
    }
    if (ans.size()==0) cout <<"[]";
    for (size_t i =0;i<ans.size();++i){
        if (i==0) cout<<"[";
        cout << ans[i];
        if (i!=ans.size()-1) cout << ", ";
        else cout << "]";
    }
}