#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n; cin >> n;
    vector <long long int> fn;
    for ( int j = 0;j<n;++j){
        vector <long long int> temp;
        int N; cin >> N;
        long long int x,sum = 0;
        for (int i = 0;i<N;++i){
            cin >> x;
            temp.push_back(x);
        }
        sort(temp.begin(),temp.end());
        for(size_t k = 1;k<temp.size();++k){
            sum += temp[k];
        }
        fn.push_back(sum);
    }
    for (auto e: fn) cout << e << "\n";
    return 0;
}