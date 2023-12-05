#include<bits/stdc++.h>
using namespace std;
int main() {
    int x;
    vector<int> y;
    while(cin>>x){
        y.push_back(x);
    }
    int c=1,Max = 1;
    for(int i =0;i<y.size()-1;++i){
        if(y[i]==y[i+1]) {
            c++;
            if(i==y.size()-2) Max = max(Max, c);
        }
        else{Max = max(Max, c); c = 1;}
    }
    c = 1;
    vector<vector<int> > w;
    for(int i = 0;i<y.size();++i){
        vector<int> z;
        z.push_back(y[i]);
        z.push_back(i);
        if (i==y.size()-1 && Max ==1){
            z.push_back(i+1);
            w.push_back(z);
            break;
        }
        else{
            for (int k = i+1;k<y.size();++k){
                if(y[i]==y[k]){
                    c++;
                    if (k==y.size()-1) {i = k-1; break;}
                }
                else{
                    i = k-1;
                    break;
                }
            }
            if(c==Max){
                z.push_back(z[1]+c);
                w.push_back(z);
            }
        }
        
        z.clear();
        c = 1;
        //if (i==y.size()-1 && w.size()==1) break;
    }
    sort(w.begin(),w.end());
    for (int i =0; i <w.size();++i){
        cout << w[i][0]<< " --> x[ " << w[i][1]<< " : " << w[i][2]<< " ]"<<"\n";
    }
    return 0;
}
