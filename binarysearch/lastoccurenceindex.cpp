#include <bits/stdc++.h>
using namespace std;

int findlastoccurence(vector<int> &v, int first, int last, int target){
    if(target > v[v.size()-1] || target < v[0] || (last == 0 && v[last]!= target) ||( first == v.size()-1 && v[first] != target)) return -1;
    
    bool flag1 = false;
    bool flag2 = false;
    if(v[first] < target){
        first++;
        flag1 = true;
    }
    if(v[last] > target){
        last--;
        flag2 = true;
    }
    
    if(flag1 || flag2) return findlastoccurence(v, first, last, target);
    else if(first >= last-1 && v[last] != target) return -1;
    else return last;
    
}

int approach2(vector<int> &v, int first, int last, int target){
    //0   1   2   2   2   2   3   4   5   6   8     9
    if(v.empty() || first > last ) return -1;
    int mid = (first+last)/2;
    if (v[mid] < target) return approach2(v, mid + 1, last, target);
    if (v[mid] > target) return approach2(v, first, mid - 1, target);
    if(v[mid] == target){
        if(mid < v.size()-1 && v[mid+1] == target) return approach2(v, mid+1, last, target);
        return mid;
    }
    
    return -1;
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

    cout<<target<<" appear last at index "<<approach2(v, 0, v.size()-1, target);

    return 0;
}