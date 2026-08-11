#include <bits/stdc++.h>
using namespace std;

int findlowerbound(int high, int low, vector<int> &v, int target){
    int mid = (high+low) / 2;
    if((low == high && target!= v[low]) || (high == low+1 && target!= v[low] && target!=v[high])){
        return v.size();
    }
    if(v[mid] < target){
        low = mid+1;
        return findlowerbound(high, low, v, target);
    }
    if(v[mid] >= target) return mid;
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

    cout<<"Lower bound: "<<findlowerbound(vec.size()-1, 0, vec, target);
    return 0;
}