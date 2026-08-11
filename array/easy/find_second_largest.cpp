#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void find_second_largest(vector <int> arr){
    int max= arr[0];
    int i =0;
    while(i<arr.size()){
        if(arr[i]>max){
            max = arr[i];
        }
        i++;
    }
    for(int i = 0;i<arr.size(); i++){
        if(arr[i]==max){
            arr[i]=0;
            break;
        }
    }
    max=arr[0];
    i=0;
    while(i<arr.size()){
        if(arr[i]>max){
            max = arr[i];
        }
        i++;
    }
    cout<<"Second Largest is: "<<max<<endl;

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


}