#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, sum = 0; cin >> n;
    string con[n]; int cos[n];
    string way;
    for (int i = 0; i<n; i++){cin >> con[i] >> cos[i];}
    cin.ignore();
    string path; getline(cin, path);
    for (size_t i = 0; i < path.size();i++){
        if (i%7==0){way += path.substr(i+4,2);}
    }
    for(size_t i = 2; i < way.size();i+=2){
        if(way.substr(i,2) != way.substr(i-2,2)){
            for (int j = 0; j < n; j++){
                if (way.substr(i,2)==con[j]){sum += cos[j];}
            }
        }
        else{sum += 0;}

    }
    cout << sum;
} 