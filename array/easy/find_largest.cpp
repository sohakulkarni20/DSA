#include <iostream>
#include<bits/stdc++.h>
#include <vector>
using namespace std;

void find_largest(vector <int> arr){
    if(arr.size() == 0){
        cout<<"Array does not have any elements";
        return;
    }
    int max = arr.at(0);
    int i=1;
    while(i<arr.size()){
        if(max<arr[i]){
            max = arr[i];
        }
        i++;
    }
    cout<<"Max is: "<<max<<endl;

}

int main(){
    cout<<"Enter size of array: ";
    int size;
    cin>>size;
    vector <int> arr;
    int v;
    cout<<"enter values"<<endl;
    for(int i=0; i<size; i++){
        cout<<"At index "<<i<<"\t";
        cin>>v;
        arr.push_back(v);
    }

    cout<<"Array:\t";
    for(int i=0; i<arr.size(); i++){
        cout<<arr.at(i)<<"\t";
    }
    cout<<endl;
    find_largest(arr);
    return 0;
}