#include <bits/stdc++.h>
using namespace std;

int findit(int high, int low, vector<int> &v, int target){
    int mid = (high + low)/2;
    if(v[mid] == target) return mid;
    if((low == high && target!= v[low]) || (high == low+1 && target!= v[low] && target!=v[high])){
        cout<<"Element not found :("<<endl;
        return -1;
    }
    else if(target<v[mid]){
       high = mid-1;
    }
    else if(target > v[mid]){
        low = mid+1;
    }
    return findit(high, low, v, target);
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
    cout<<"The given target exist at location: "<<findit(vec.size()-1, 0, vec, target);
    return 0;
}
