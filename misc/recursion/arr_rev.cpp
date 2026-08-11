#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//method using brute force
void rev_arr(int arr[], int size){
    int rev[size];
    int index = size-1;
    for(int i=0; i<size; i++){
        rev[i]=arr[index];
        index--;
    }

    cout<<"Given array: "<<endl;
    cout<<"Index\tValue"<<endl;
    for(int i=0; i<size; i++){
        cout<<i<<"\t"<<rev[i]<<endl;
    }
}

//recursion method
void rec_rev_arr(int arr[], int size){
    int *pt1 = &arr[0];
    int *pt2 = &arr[size-1];
    int temp =0;

    for(int i=0; i<size/2; i++){
        temp = *pt1;
        *pt1 = *pt2;
        *pt2 = temp;
        pt1++;
        pt2--;
    }

    cout<<"Reversed array: "<<endl;
    cout<<"Index\tValue"<<endl;
    for(int i=0; i<size; i++){
        cout<<i<<"\t"<<arr[i]<<endl;
    }
}
int main(){

    cout<<"Enter the size of an array you want to reverse: ";
    int size;
    cin>>size;

    int arr[size];
    cout<<"Enter elements for your array: "<<endl;
    for(int i=0; i<size; i++){
        cout<<"Element number: "<<i<<"\t";
        cin>>arr[i];
    }

    rev_arr(arr, size);
    rec_rev_arr(arr, size);
}