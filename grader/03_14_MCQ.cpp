#include <iostream>
#include <string>
using namespace std;
int main(){
    string ans,que; 
    getline(cin,ans);
    getline(cin,que);
    int a = ans.length();
    int q = que.length();
    int n =0, count=0;
    if(a == q){
        while(n <= a-1){
            if(ans[n]==que[n]){
                count +=1;
                
            }
            n++;
        }
        cout << count;
    }
    else {cout << "Incomplete answer";}
}