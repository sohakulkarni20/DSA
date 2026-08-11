#include <iostream>
#include <stack>
using namespace std;

string removek(string n, int k){

    if (n.length() <= k) return "0";

    stack<char> s;
    int a = 0;

    while(a<n.length()){
        if(s.empty() && n[a] == '0' && a == 0){
            a++;
            continue;
        }
        if(s.empty()){
            s.push(n[a]);
            a++;
        }
        else if(n[a] >= s.top()){
            s.push(n[a]);
            a++;
        }
        else if(n[a] < s.top()){
            while(s.empty() == false && k>0 && n[a] < s.top()){
                k--;
                s.pop();
            }
            s.push(n[a]);
            a++;
        }
    }

    if(k > 0){
        for(int i=0;  i<k; i++){
            s.pop();
        }
    }

    string res;
    while(!s.empty()){
        res = res + s.top();
        s.pop();
    }

    int ab =0; 
    int b = res.length()-1;
    for(int i = 0; i<res.length()/2; i++){
        swap(res[ab], res[b]);
        ab++;
        b--;
    }

    return res;
}

int main(){
    string n = "541892";
    n = "10200";
    n = "1002991";
    int k = 3;

    string result = removek(n, k);
    cout<<"Result: "<<result<<endl;
    return 0;
}