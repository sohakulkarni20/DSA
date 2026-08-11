#include <bits/stdc++.h>
using namespace std;

int findinsertposition(vector<int> &v, int target){
    int low =0;
    int high = v.size()-1;
    if(v[high] < target) return v.size();
    if(v[low] > target) return 0;
    while(high >= 0 && low < v.size() && (v[low] < target || v[high] > target)){
        if(v[high] == target) return high;
        if(v[low] == target) return low;
        if(v[high] > target) high--;
        if(v[low] < target) low++;
    }
    return low;
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

    cout<<target<<" should be inserted at posiiton "<<findinsertposition(vec, target);
    return 0;
}