#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> split (string line, char delimiter){
    vector<string> y;
    line = delimiter + line + delimiter;
    for (size_t i = 0;i<line.size();++i){
        if(line[i]!=delimiter)
            for (int j=i+1; j<line.size(); ++j)
                if (line[j]==delimiter){
                    string temp = line.substr(i, j-i);
                    y.push_back(temp);
                    i = j;
                    break;
                }
    }
    return y;
}
int main(){
    string line; getline(cin, line);
    string delim; getline(cin, delim);
    for (string e : split(line, delim[0])) {
        cout << '(' << e << ')';
    }
}