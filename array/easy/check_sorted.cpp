#include<iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

bool check(vector <int> &arr){

    if(arr.size()==0 || arr.size()==1){
        return true;
    }

    /* ASSUMING FIRST TWO ELEMENTS IN ARRAY ARE UNIQUE */
    //ascending order   [1, 2, 3, 4, 5, 6] size =6
    if(arr[0]<arr[1]){
        for(int i=0; i<arr.size(); i++){
            if(i == arr.size()-1){
                if(arr[i]>arr[i-1]){
                    cout<<"Array is sorted!"<<endl;
                    return true;
                }
            }
            if(arr[i]>arr[i+1]){
                    cout<<"Array is not sorted!"<<endl;
                    return false;
                }
        }
    }

    //descending order  [6, 5, 4, 3, 2, 1] size = 6
    if(arr[0]>arr[1]){
        for(int i=0; i<arr.size(); i++){
            if(i == arr.size()-1){
                if(arr[i]<arr[i-1]){
                    cout<<"Array is sorted!"<<endl;
                    return true;
                }
            }
            if(arr[i]<arr[i+1]){
                cout<<"Array is not sorted!"<<endl;
                return false;
            }
        }
    }
    return false;
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
    cout<<check(arr);
}