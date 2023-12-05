#include <iostream>
#include <string>
using namespace std;
int main(){
    int n; cin >> n;
    string list[n], ans[n];
    for (int i = 0; i < n; i++){
        cin >> list[i];
    }
    cin.ignore();
    for (int i = 0; i < n; i++){
            ans[i]=list[i];
    }
    string a; getline(cin,a);
    for(int i = 0; i < a.size(); i++){
        if (a[i]=='C') {
            for (int N = 0 ; N < n/2; N++){
                ans[N] = list[N+(n/2)];
                ans[N+(n/2)] = list[N]; 
            }
        }
        if (a[i]=='S'){
            int c = (n/2)-1;
            for (int N = 0; N < n; N++){
                if (N%2 == 0){ans[N]=list[N/2];}
                else {ans[N]= list[N+c]; c--;}
            }
            c = 0;
        }
        for (int j = 0; j < n; j++){
            list[j]=ans[j];
        }
    }
    for(int j = 0; j<n; j++){
        cout << ans[j] << " ";
    }
    return 0;
}