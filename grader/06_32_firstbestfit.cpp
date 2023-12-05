#include <bits/stdc++.h>
using namespace std;
int main(){
    string req; cin>> req;
    vector<int> input;
    vector< vector<int> > ans;
    int x;
    while (cin >> x) input.push_back(x);
    vector<int> t;
    t.push_back(input[0]);
    ans.push_back(t);
    if(req == "first"){
        for (size_t h = 1;h<input.size();++h){
            bool found = false;
            for (auto& e : ans){
                int sum = 0;
                for(auto& f : e) sum += f;
                if (sum + input[h] <= 100) {
                    e.push_back(input[h]);
                    found = true;
                    break;
                }
            }
            if(!found){
                vector <int> T; T.push_back(input[h]);
                ans.push_back(T);
            }
        }
    }
    if(req=="best"){
        for (size_t h = 1;h<input.size();++h){
            vector <int> selector;
            bool found = false;
            for(size_t i = 0;i<ans.size();++i){
                int sum = 0;
                for (size_t j = 0;j<ans[i].size();++j){
                    sum += ans[i][j];
                }
                if(100-(sum+input[h])<0) selector.push_back(100);
                else {selector.push_back(100-(sum+input[h])); found = true;}
            }
            if(found){
                int min =selector[0],c = 0;
                for(size_t i = 1;i<selector.size();++i){
                    if(selector[i]<min) {c = i; min = selector[i];}
                }
                ans[c].push_back(input[h]);
            }
            else{
                vector <int> T; T.push_back(input[h]);
                ans.push_back(T);
            }
        }
    }
    for(auto& v:ans){
        sort(v.begin(),v.end());
        int sum = 0;
        for (auto& f : v) sum -= f;
        v.insert(v.begin(),v.size());
        v.insert(v.begin(),sum);
    }
    sort(ans.begin(),ans.end());
    for (auto e:ans){
        for(size_t pim = 2; pim < e.size();++pim ) cout << e[pim] <<' ';
        cout << endl;
    }
    return 0;
}