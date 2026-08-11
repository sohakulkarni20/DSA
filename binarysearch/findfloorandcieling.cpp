#include <bits/stdc++.h>
using namespace std;

void findfloorandcieling(vector<int> &v, int target){
    if(v.size() == 0) return;
    if(target == v[v.size()-1]){
        cout<<"Floor == Cieling: "<<v[v.size()-1]<<endl;
        return;
    }
    int low =0;
    int high = v.size()-1;
    bool flag1 = true;
    bool flag2 = true;
    if(v[high] < target){
        cout<<"No Cieling Exists "<<endl;
        cout<<"Floor is at index "<<high<<" i.e. "<<v[high]<<endl;
        return;
    }
    if(v[low] > target){
        cout<<"No Floor Exists "<<endl;
        cout<<"Cieling is at index "<<low<<" i.e. "<<v[low]<<endl;
        return;
    }
    while(flag1 || flag2){
        if(v[low] < target) low++;
        if(v[low] >= target) flag1 = false;
        if(v[high]>target) high--;
        if(v[high] <= target) flag2 =false;
    }
    cout<<"Cieling is at index "<<low<<" i.e "<<v[low]<<endl;
    cout<<"Floor is at index "<<high<<" i.e. "<<v[high]<<endl;
    
}

void approach2(int low, int high, vector<int> &v, int target){
    if(v[high] < target){
        cout<<"No Cieling Exists "<<endl;
        cout<<"Floor is at index "<<high<<" i.e. "<<v[high]<<endl;
        return;
    }
    if(v[low] > target){
        cout<<"No Floor Exists "<<endl;
        cout<<"Cieling is at index "<<low<<" i.e. "<<v[low]<<endl;
        return;
    }
    bool flag1 = false;
    bool flag2 = false;
    if(v[low] < target){
        low++;
        flag1 = true;
    }
    if(v[high] > target){
        high --;;
        flag2 = true;
    }
    if(flag1 || flag2){
        approach2(low, high, v, target);
    }
    else{
        cout<<"Cieling is at index "<<low<<" i.e "<<v[low]<<endl;
        cout<<"Floor is at index "<<high<<" i.e. "<<v[high]<<endl;
        return;
    }
}
void approach3(int low, int high, vector<int> &v, int target){
    if(low == v.size() || high == -1){
        cout<<"Somethin went wrong"<<endl;
        return;
    }
    if(low>high ) {
        cout<<"Cieling is at index "<<low<<" i.e "<<v[low]<<endl;
        cout<<"Floor is at index "<<high<<" i.e. "<<v[high]<<endl;
        return;
    }
    
    if(v[high] < target){
        cout<<"No Cieling Exists "<<endl;
        cout<<"Floor is at index "<<high<<" i.e. "<<v[high]<<endl;
        return;
    }
    if(v[low] > target){
        cout<<"No Floor Exists "<<endl;
        cout<<"Cieling is at index "<<low<<" i.e. "<<v[low]<<endl;
        return;
    }
    bool flag1 = false;
    bool flag2 = false;
    int mid = (high+low)/2;
    if(v[mid] == target){
        cout<<"Cieling is at index "<<mid<<" i.e "<<v[mid]<<endl;
        cout<<"Floor is at index "<<mid<<" i.e. "<<v[mid]<<endl;
        return;
    }
    if(v[mid] < target){
        low= mid+1;
        flag1 = true;
    }
    if(v[mid] > target){
        high = mid-1;
        flag2 = true;
    }
    if(flag1 || flag2){
        approach3(low, high, v, target);
    }
    else{
        if(v[low] == target) high = low;
        else if(v[high] == target) low = high;
        cout<<"Cieling is at index "<<low<<" i.e "<<v[low]<<endl;
        cout<<"Floor is at index "<<high<<" i.e. "<<v[high]<<endl;
        return;
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

    findfloorandcieling(vec, target);
    return 0;
}
    