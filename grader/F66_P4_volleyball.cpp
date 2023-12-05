#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for (int z = 0;z<n;++z){
        vector <string> input;
        string x;
        while(cin >> x){
            if (x =="*") break;
            input.push_back(x);
        }
        vector<int> temp1;
        for (size_t i = 2;i<input.size();++i){
            int t = stoi(input[i].substr(0,input[i].find("-")+1));
            temp1.push_back(t);
        }
        pair <string, vector<int> > team1 = make_pair(input[0],temp1);
        vector<int> temp2;
        for (size_t i = 2;i<input.size();++i){
            int t = stoi(input[i].substr(input[i].find("-")+1,input[i].size()-(input[i].find("-")+1)));
            temp2.push_back(t);
        }
        pair <string, vector<int> >team2 = make_pair(input[1],temp2);
        int c1=0,c2=0;
        int len = temp1.size();
        for (int i = 0;i<len;++i){
            if (i != 4){
                if(temp1[i] == 25) c1++;
                else if (temp2[i]==25) c2++;
                else if (temp1[i]-temp2[i]==2) c1++;
                else if (temp2[i]-temp1[i]==2) c2++;
            }
            else {
                if(temp1[i] == 15) c1++;
                else if (temp2[i]==15) c2++;
                else if (temp1[i]-temp2[i]==2) c1++;
                else if (temp2[i]-temp1[i]==2) c2++;
            }
        }
        if(c1>c2) team1.first = "*"+team1.first;
        else team2.first = "*"+team2.first;
       
        cout << team1.first << ' ' << c1 <<' '<< '[' << ' ';
        for (auto f : team1.second) cout << f << ' ';
        cout << ']'<< endl;
        cout << team2.first << ' '<< c2 <<' ' <<'[' << ' ';
        for (auto f : team2.second) cout << f << ' ';
        cout << ']'<< endl;
    }
}