#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int x[n][3];
    for (int i = 0; i < n;i++){
        for (int j = 0; j < 3;j++){
            cin >> x[i][j]; 
        }
    }
    for (int i = 0; i<n;i++){
        for (int j = i+1;j<n;j++){
            if (x[i][0]>x[j][0]){swap(x[i],x[j]);}
        }
    }
    cin.ignore();
    int m; cin >> m;
    int y [m][2];
    for (int i = 0; i < m;i++){
        for (int j = 0; j<2;j++){
            cin >> y[i][j];
        }
    }
    bool status=0,way=0;
    int sum[n];
    for (int i = 0; i<m;i++){
        if(y[i][0]>y[i][1]){status = 0;}
        else {status = 1;}
        for (int j = 0;j<n;j++){
            if(x[j][1]>x[j][2]){way = 0;}
            else if (x[j][1]<x[j][2]){way = 1;}
            else {way = !status;}
            if (status == way){
                // อยู่ใน ?
                if((min(x[j][1], x[j][2]) <= y[i][0]) && (y[i][0] <= max(x[j][1], x[j][2]))){
                    // จบใน ?
                    if ((min(x[j][1], x[j][2]) <= y[i][1]) && (y[i][1] <= max(x[j][1], x[j][2]))){
                        sum[j] = 0;
                    }
                    // จบนอก
                    else{ sum[j] = abs(x[j][2]-y[i][1]);}
                }
                else {sum[j]=abs(x[j][2]-y[i][0])+abs(y[i][1]-y[i][0]);}
            }
            else{
                sum [j] = abs(x[j][2]-y[i][0])+abs(y[i][1]-y[i][0]);
            }
        }
        for (int j = 0; j<n;j++){
            if (sum[j]== *min_element(sum,sum+n)){
                cout << ">> " << x[j][0]<< "\n";
                break;
            }
        }   
    }
}