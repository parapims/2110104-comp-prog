#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<double> > w;
    int n; cin >> n;
    double x,y;
    for (int i = 1;i<=n;++i){
        cin >> x >> y;
        vector<double> z;
        z.push_back(sqrt(pow(x,2)+pow(y,2)));
        z.push_back(i);
        z.push_back(x);
        z.push_back(y);
        w.push_back(z);
        z.clear();
    }
    sort(w.begin(),w.end());
    cout << "#"<< w[2][1] <<':'<< " " << '('<<w[2][2]<<", "<<w[2][3]<<')';
    return 0;
}
