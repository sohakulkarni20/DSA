#include <iostream>
#include <string.h>
#include <bitset>
using namespace std;

bool check_substring(string s1, string s2){
    string target;
    for(int i=0; i<s2.length(); i++){
        for(int j=0; j<s1.length(); j++){
            if(s1.at(j) == s2.at(i)) break;
            else if(j==s1.length()-1 ) return false;
        }
    }
    return true;
}

bool approach2(string s1, string s2){
    //2 pointer
    // s1 = a   p   p   l   e
    // s2 = a   p   p
    int a = 0, b = 0;
    char target;
    while(b < s2.length()){
        a = 0;
        target = s2.at(b);
        while(a < s1.length()){
            if((char) s1.at(a) == target){
                break;
            }
            else if(a == s1.length() -1 ) return false;
            
            a++;
        }
        b++;
    }
    return true;
}

int main(){
    string s1 = "apple", s2 = "app";
    bool  chk;
    //chk = check_substring(s1, s2);
    chk = approach2(s1, s2);
    if(chk == true) cout<<"true";
    else cout<<"false";
    
    return 0;
}