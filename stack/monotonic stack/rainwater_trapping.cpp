#include <iostream>
#include <vector>
using namespace std;

int water_trapped_approach2(vector <int> &v){
    //2 pointer
    int l =0;
    int r =v.size()-1;
    int lmax = v[l];
    int rmax = v[r];
    int water = 0;
    
    while(l<r){
        if(lmax < rmax){
            water += lmax - v[l];
            l++;
            lmax = max(lmax, v[l]);
        }
        else{
            water+= rmax - v[r];
            r--;
            rmax = max (rmax, v[r]);
        }
    }
    return water;
}

int trapped_rainwater(vector<int> &v){
    //wrong hua hai
    int a =0;
    while(v[a] == 0 || v[a] < v[a+1]) a++;
    int b=a;
    int count =0;
    int mini = 0;
    int max=0;
    while(a < v.size() && b<v.size()){
        if(v[a] > v[a+1]){
            b++;
            while(b!=v.size()-1 && v[b]<= v[b+1]){
                b++;
            }
            max=b;
            mini=a;
            a++;
            cout<<"A: "<<a<<" B: "<<b<<" Min: "<<v[mini]<<" Max: "<<v[max]<<endl;
            while(a<b){
                if(v[mini] == v[max]){
                    count += v[max] - v[a];
                }else{
                    count += min(v[mini], v[max]) - v[a];
                }
                a++;
            }
            a = b;
            b++;
            continue;
        }
        
        if(v[a] < v[a+1]){
            a++;
            if(a == v.size()) break;
        }
    }
    return count;
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

    int rain = 0;
    
    //rain = trapped_rainwater(v);
    rain = water_trapped_approach2(v);
    cout<<"Trapped rainwater in units is ---> "<<rain<<endl;
}