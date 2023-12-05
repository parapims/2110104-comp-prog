#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n; cin >> n;
    int x[n],y[n];
    int pos;
    for (int i = 0; i<n; i++){
        cin >> x[i];
        y[i] = x[i];
    }
    sort(y,y+n);
    for (int i =0;i<n;i++){
        cout << x[i]<<" ";
    }
    cout << "\n";
    for (int i = n-1; i >= 0;i--){
        for (int j =0; j < n;j++){
            if (x[j]==y[i]){pos =j;}
        }
        if (pos == 0){
            int c = i;
            for (int k = 0;k<c;k++){
                swap(x[k],x[c]);
                c--;
            }
            for (int k = 0; k<n;k++){
                cout << x[k] <<" ";
            }
            cout << "\n";
        }
        else if (pos ==i){continue;}
        else if (pos>0 && pos < n-1){
            int c = pos,C = i;
            for(int k = 0;k<=pos/2;k++){
                swap(x[k],x[c]);
                c--;
            }
            for (int k = 0; k<n;k++){
                cout << x[k] <<" ";
            }
            cout << "\n";
            for (int k = 0;k<=i/2;k++){
                swap(x[k],x[C]);
                C--;
            }
            for (int k = 0; k<n;k++){
                cout << x[k] <<" ";
            }
            cout << "\n";
        }
        int z = 0;
        for (int j = 0;j<n;j++){
            if(x[j]==y[j]){z++;}
        }
        if(z==n){z = 0;break;}
    }
}