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