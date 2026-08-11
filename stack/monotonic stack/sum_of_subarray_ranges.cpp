#include <iostream>
#include <vector>
using namespace std;

int find_range_of_min_of_subarrays (vector<int> &v){
    //brute force
    int sum = 0;
    int frame = 1;
    int start = 0;
    int mini = 0;
    int maxi = 0;
    while(frame<=v.size()){
        mini = v[start];
        maxi = v[start];
        for(int i=start; i<(frame+ start);i++){
            mini = min(mini, v[i]);
            maxi = max(maxi, v[i]);
        }
        sum+= maxi - mini;
        if(v.size()-frame <= start){
            start = 0;
            frame++;
        }
        else start++; 
    }
    return sum;
}

int main(){

    cout<<"Enter elements, insert 440 to stop"<<endl;
    int var;
    vector <int> v;

    for(int i=0; i<100; i++){
        cout<<"At index "<<i<<" --> ";
        cin>>var;
        if(var == 440) break;
        v.push_back(var);
    }

    cout<<"Array: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int sum = 0;
    sum = find_range_of_min_of_subarrays(v);
    cout<<"Sum of Sub array Ranges: "<<sum<<endl;
    
    return 0;
}