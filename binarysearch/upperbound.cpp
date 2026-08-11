#include <bits/stdc++.h>
using namespace std;

int findupperbound(vector<int> &v, int target){
    if(v.size() ==0) return -1;
    if(v[v.size()-1]<target) return v.size();
    int low =0, high = v.size()-1;

    while(low<=high){
        if(v[high] > target){
            high--;
        }
        else if(v[high] <= target) break;
    }
    return high+1;
}

int approach2(vector<int> v, int target){
    if(v.size() ==0) return -1;
    if(v[v.size()-1]<target) return v.size();
}

int main(){
    cout<<"Enter elements is sorted manner, press 440 to stop: \n";
    int v = 0;
    vector <int> vec;
    for(int i=0; i<15; i++){
        cout<<"Index "<<i<<": ";
        cin>>v;
        if(v == 440) break;
        vec.push_back(v);
    }
    cout<<"Enter target element: ";
    int target;
    cin>>target;

    cout<<"Upperbound: "<<findupperbound(vec, target);
    return 0;
}