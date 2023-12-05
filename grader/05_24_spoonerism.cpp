#include <iostream>
#include <string>
using namespace std;
int main(){
    string s; getline(cin,s);
    int p[2]={},pos1 =0, pos2 = 0,c = 0;
    p[0] = s.find(" ");
    for(size_t i = s.size()-1;i>0;i--){
        if(s[i]==' '){p[1]=i; break;}
    }
    string f = s.substr(0,p[0]);
    string m = s.substr(p[0],s.size()-p[0]-(s.size()-p[1]-1));
    string l = s.substr(p[1]+1,s.size()-p[1]-1);
    for (size_t i = 0; i<f.size();i++){
        if(f[i]=='a'||f[i]=='e'||f[i]=='i'||f[i]=='o'||f[i]=='u'){pos1 = i;c++;}
        if (c>0) {c= 0; break;}
    }
    for (size_t i = 0; i<l.size();i++){
        if(l[i]=='a'||l[i]=='e'||l[i]=='i'||l[i]=='o'||l[i]=='u'){pos2 = i;c++;}
        if (c>0) break;
    }
    cout<<f.substr(0,pos1)<<l.substr(pos2,l.size()-pos2)<<m<<l.substr(0,pos2)<<f.substr(pos1,f.size()-pos1);
}
