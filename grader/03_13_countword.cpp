#include <iostream>
#include <string>
using namespace std;
int main(){
    string sentence, word; 
    getline(cin,word);
    int l = word.length();
    getline(cin,sentence);
    int c = 0;
    string sen;
    sen = " " + sentence + " ";
    while(true){
        int index = sen.find(word);
        if (index != -1){
            if (sen[index- 1 ] == ' ' || sen[index- 1 ] == '"' || sen[index- 1 ] == '(' || sen[index- 1 ] == ')' || sen[index- 1 ] == ',' || sen[index- 1 ] == '.' || sen[index- 1 ] == 39 ){
                if(sen[index+l ] == ' ' || sen[index+l ] == '"' ){
                    c++;
                
                }
                
            }
            sen[index] = word[0]+1;
        }
        if (index == -1) {break;}
    }
    cout << c;
}