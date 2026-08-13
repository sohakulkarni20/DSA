#include <bits/stdc++.h>
using namespace std;

int approach(vector<int> &v, int target, int low, int high){
    if(v.size() == 0 || v[0] > target || v[v.size()-1] < target) return -1;

    int mid = (low+high)/2;

    if(v[mid] < target) return approach(v, target, mid, high);
    else if(v[mid] > target) return approach(v, target, low, mid);
    else{
        if(v[mid+1] > target || mid == v.size()-1) return mid;
        else return approach(v, target, mid, high);
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

    cout<<"Upperbound: "<<approach(vec, target, 0, vec.size()-1);
    return 0;
}