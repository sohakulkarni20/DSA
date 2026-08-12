#include <bits/stdc++.h>
using namespace std;

int counting(vector<int> &v, int target, int low, int high){
    if(v.empty() == true || v[0] > target || v[v.size()-1] < target || low> high) return 0;
    bool flag1 = false, flag2 = false;
    if(v[low] < target){
        low++;
        flag1 = true;
    }
    if(v[high] > target){
        high--;
        flag2 = true;
    }
    if(flag1 || flag2){
        return counting(v, target, low, high);
    }
    else return (high-low)+1;
}

int findlowerbound(vector<int> &v, int target, int low, int high){
    //1 2   2   2   2   2   3   4   5   6   6   6   7   8
    if(v[0] == target) return 0;
    int mid = (low+high)/2;
    if(v[mid] > target)  return findlowerbound(v, target, low, mid);
    else if(v[mid] < target) return findlowerbound(v, target, mid, high);
    else {
        if(v[mid-1] < target) return mid;
        else  return findlowerbound(v, target, low, mid);
    }
}

int findupperbound(vector<int> &v, int target, int low, int high){
    if(v[v.size()-1] == target) return v.size()-1;
    int mid = (low+high)/2;
    if(v[mid] > target) return findupperbound(v, target, low, mid);
    else if(v[mid] < target) return findupperbound(v, target, mid, high);
    else{
        if(v[mid+1] > target) return mid;
        else return findupperbound(v, target, mid, high);
    }
}

int findfreq(vector<int> &v, int target){
    return findupperbound(v, target, 0, v.size()-1) - findlowerbound(v, target, 0, v.size()-1) +1;
}

int approach2(vector<int> &v, int target, int low, int high){
    if(v.empty() == true || v[0] > target || v[v.size()-1] < target || low> high) return 0;
    int mid = (low+high)/2;
    if(v[mid] > target){
        high = mid-1;
        return approach2(v, target, low, high);
    }else if(v[mid] < target){
        low = mid+1;
        return approach2(v, target, low, high);
    }
    if(v[high] == target && v[low] == target) return (high-low)+1;
}

int main(){
    cout<<"Insert elements in an array in a sorted order: \nPress 440 to stop\n";
    vector<int> v;
    int var;
    for(int i=0; i<15; i++){
        cout<<"Index "<<i<<": ";
        cin>>var;
        if(var == 440) break;
        v.push_back(var);
    }
    if(v.size() == 0){
        cout<<"No elements in the vector\n";
        return 0;
    }
    int target = 0;
    cout<<"Enter target: ";
    cin>>target;

    cout<<"Array looks like: ";
    for(int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    //cout<<"Frequency of target "<<target<<" is "<<counting(v,target, 0, v.size()-1);
    cout<<"Frequency of target "<<target<<" is "<<findfreq(v,target); //perfect use of binary search is here, refer this
    return 0;
}