#include <bits/stdc++.h>
using namespace std;

int findlowerbound(int high, int low, vector<int> &v, int target){
    //1 2   3   3   3   5   6
    if(v[0] > target || v[v.size()-1] < target || v.size() == 0) return -1;

    int mid = (low+high) /2;

    if(v[mid] < target) return findlowerbound( high,  mid+1, v,  target);
    else if(v[mid] > target) return findlowerbound( mid-1,  low, v,  target);
    else{
        if(v[mid-1] < target || mid == 0) return mid;
        else return  findlowerbound( mid-1,  low, v,  target);
    }
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