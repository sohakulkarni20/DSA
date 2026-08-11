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

/*
void approach2(vector <int> arr){
    int a = 0;
    int m = 0;
    int *p1 = &arr[a];
    int *p2 = &arr[m];
    for(int i=0; i<arr.size(); i++){
        if(arr[m+1]>arr[m]){
            arr[m] = arr[m+1];
        }
        m++;
    }
    //this is incomplete
    cout<<"max: "<<arr[m];
}
*/

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

    //find_second_largest(arr);
    //approach2(arr);

}