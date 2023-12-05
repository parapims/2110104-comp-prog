#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n; cin >> n;
    int z[n][4];
    for (int i = 0; i <n;i++){
        for (int j = 0; j<4;j++){
            cin >> z[i][j];
        }
    }
    int x1,y1;
    int a[n][4];
    for (int i = 0; i<n;i++){
        for (int j = 0; j<4;j++){
            a[i][j] = 0;
        }
    }
    for (int i = 0;i<n;i++){
        for (int j = i+1;j<n;j++){
            if ((z[j][0]>=z[i][0]&&z[j][0]<=z[i][2])||(z[j][2]>=z[i][0]&&z[j][2]<=z[i][2])){
                x1 = z[j][2]-z[j][0];
            }
            else if (z[j][2]>=z[i][0]&&z[j][2]<=z[i][2]){
                x1 = z[j][2]-z[i][0];
            }
            else if (z[j][0]>=z[i][0]&&z[j][0]<=z[i][2]){
                x1 = z[j][0]-z[i][0];
            }
            else {x1 = 0;}

            if ((z[j][1]>=z[i][1]&&z[j][1]<=z[i][3])||(z[j][3]>=z[i][1]&&z[j][3]<=z[i][3])){
                y1 = z[j][3]-z[j][1];
            }
            else if (z[j][3]>=z[i][1]&&z[j][3]<=z[i][3]){
                y1 = z[j][3]-z[i][1];
            }
            else if (z[j][1]>=z[i][1]&&z[j][1]<=z[i][3]){
                y1 = z[j][1]-z[i][1];
            }
            else {y1 = 0;}
            //a[i][j] = x1*y1;
            cout << x1*y1 << " "<<x1<<" "<<y1<< " "<<endl;
        }
    }
    int max = 0;
    for (int i = 0;i<n;i++){
        for (int j = i+1;j<n;j++){
            if(a[i][j]>max){max = a[i][j];}
        }
    }
    cout << "Max overlapping area = " << max <<endl;
}