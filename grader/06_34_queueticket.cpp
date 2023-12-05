#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string reset,req; int q,c=0;
    cin >> reset >> q;
    vector<int> Time;
    vector<int> Que;
    vector<int> avg;
    Que.push_back(q);
    for(int i = 0;i<n-1;++i){
        cin >> req;
        if(req == "new"){
            int time; cin >> time;
            Time.push_back(time);
            cout << ">> ticket " << q <<"\n";
            ++q;
            Que.push_back(q);
        }
        else if(req == "next"){
            cout << ">> call " << Que[c]<<"\n";
            c++;
        }
        else if(req=="order"){
            int time; cin>>time;
            avg.push_back(time -Time[c-1]);
            cout << ">> qtime " << Que[c-1] <<' '<< time -Time[c-1]<<"\n";
        }
        else if(req=="avg_qtime"){
            double sum = 0;
            for (size_t j =0;j<avg.size();++j) sum += avg[j];
            sum /= avg.size();
            cout <<">> avg_qtime "<< round(sum*100.0)/100.0<<"\n";
        }
    }
    return 0;
}