#include <iostream>
#include <vector>
using namespace std;

int find_sum_of_min_of_subarrays (vector<int> &v){
    //brute force
    int sum = 0;
    int frame = 1;
    int start = 0;
    int mini =0;

    while(frame<=v.size()){
        mini = v[start];
        for(int i=start; i<(frame+ start);i++) mini = min(mini, v[i]);
        if(v.size()-frame <= start){
            start = 0;
            frame++;
        }
        else start++;
        sum+= mini;
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
    sum = find_sum_of_min_of_subarrays(v);
    int mod = 1e9 + 7; // Mod value
    sum = sum % mod;
    cout<<"Sum of Sub array minimums: "<<sum<<endl;
    return 0;
}