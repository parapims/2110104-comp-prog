#include <bits/stdc++.h>
using namespace std;
int main(){
    string p; double s;
    vector <vector<double> > score;
    vector <int> final;
    map <double,string> temp;
    double sum = 0;
    while(cin>>p){
        if (p=="END") break;
        else cin >> s;
        temp[-s]=p;
        sum += s;
    }
    double avg = sum/100.0;
    sum = 0;
    for(auto itr = temp.begin() ;itr!=temp.end(); ++itr){
        double x = floor((-(*itr).first)/avg);
        double y = (-(*itr).first)/avg;
        sum += x;
        vector<double> t;
        t.push_back(-(y-x));
        t.push_back(x);
        score.push_back(t);
    }
    sort(score.begin(),score.end());
    if (sum!=100) {
        for (size_t i = 0;i<(100-sum);++i) score[i][1]++;
    }
    for(size_t i = 0;i<score.size();++i){
        final.push_back(score[i][1]);
    }
    sort(final.begin(),final.end());
    int c = final.size()-1;
    for(auto itr = temp.begin() ;itr!=temp.end(); ++itr){
        if (final[c]>0) cout << (*itr).second << ' ' << final[c] << ' ' << -(*itr).first << "\n";
        c--;
    }
    return 0;
}