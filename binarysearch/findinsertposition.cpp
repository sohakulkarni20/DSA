#include <bits/stdc++.h>
using namespace std;

int findinsertposition(vector<int> &v, int target){
    if(v[0] > target) return 0;
    if(v[v.size()-1] < target) return v.size();
    int low = 0, high = v.size()-1;
    while(low < high){
        if(low<target) low++;
        if(high > target) high--;
        if(low == high -1) return (low, high);
    }
}

int approach2(vector<int> &v, int target, int low, int high){
    //1 2   4   7
    if(v[0] >= target) return 0;
    if(v[v.size()-1] <= target) return v.size();
    if(v[low] == target) return low;
    if(v[high] == target) return high;
    if(v[low]< target && v[high] > target && low == high-1) return high;
    int mid = (low+high)/2;
    if(v[mid] < target) return approach2(v, target, mid, high);
    else if(v[mid] > target) return approach2(v, target, low, mid);
    else if(v[mid] == target) return mid;
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

    //cout<<target<<" should be inserted at posiiton "<<findinsertposition(vec, target);
    cout<<target<<" should be inserted at posiiton "<<approach2(vec, target, 0, vec.size()-1);
    return 0;
}