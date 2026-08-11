#include <iostream>
#include <vector>
using namespace std;

vector<int> findmajorityelements (vector<int> &v){
    vector<int> result;
    int n = v.size()/3;
    int cnt1 = 0;
    int cnt2 = 0;
    int e1 = v[0];
    int e2 = v[1];

    return result;
}

int main(){
    vector <int> v = {1, 2, 1, 1, 3, 2};
    v = {1, 2, 1, 1, 3, 2, 2};
    v = findmajorityelements(v);
    cout<<"Answer: ";
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}