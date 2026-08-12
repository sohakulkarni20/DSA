#include <bits/stdc++.h>
using namespace std;

int findupperbound(vector<int> &v, int target){
    if(v.size() ==0) return -1;
    if(v[v.size()-1]<target) return v.size();
    int high = v.size()-1;

    while(high!=target){
        high--;
    }
    return high;
}

int approach2(vector<int> &v, int target, int low, int high){
    if(v.size() ==0) return -1;
    if(v[v.size()-1]<target) return v.size();
    int mid = (low+high)/2;
    if(v[mid] < target) return approach2(v, target, mid, high);
    else if(v[mid] < target) return approach2(v, target, low, mid);
    else{
        if(v[mid+1] > target) return mid;
        else return approach2(v, target, mid, high);
    }

    return 0;
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