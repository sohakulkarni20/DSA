#include <bits/stdc++.h>
#include <vector>
#include <stack>
using namespace std;

vector<int> func(vector<int> v){
    stack<int> s;
    vector<int> res;
    int count = 0;

    int a = 0;
    while(a<v.size()){
        if(s.empty() || v[a] <= s.top()){
            s.push(v[a]);
            a++;
            res.push_back(1);
        }
        else if(v[a] > s.top()){
            while(v[a] > s.top()){
                s.pop();
                count ++;
            }
            res.push_back(count+1);
            s.push(v[a]);
            a++;
        }
    }
    return res;
}

int main(){
    vector<int> v = { 1, 1, 1, 3, 5, 6};
    v = {120, 100, 60, 80, 90, 110, 115};
    v = {15, 13, 12, 14, 16, 20};
    cout<<"Original: ";
    for(int i= 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v = func(v);
    cout<<"Answer: ";
    for(int i= 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}