#include <iostream>
#include <algorithm>
using namespace std;

void merge_sorted(int arr1[], int arr2[]){
    int newarr[10];
    int index = 0;
    int i1=0, i2=0;
    /*while(arr1!=arr1.empty() && arr2!=arr2.empty()){
        if(arr1[i]>arr2[i]){
            newarr[index] =arr1[i];
            index++;
            i1++;
        }
        else if(arr2[i]>arr1[i]){
            newarr[index] =arr2[i];
            index++;
            i1++;
        }
        else if(arr1[i]==arr2[i]){
            newarr[index]=arr1[i1];
            index++;
            i1++;
            newarr[index]=arr2[i2];
            index++;
            i2++;
        }
    }
    if (arr1== arr1.empty()){
        std::copy(arr2, arr2 + (sizeof(arr2) / sizeof(arr2[0]), new);
    }
    if(arr2== arr2.empty()){
        std::copy(arr2, arr2 + (sizeof(arr2) / sizeof(arr2[0]), new);
    }*/

}

int main(){
    int arr1[5];
    int arr2[5];
    for(int i=0; i<10; i++){
        cin>>arr1[i];
    }
    for(int i=0; i<10; i++){
        cin>>arr2[i];
    }
    merge_sorted(arr1, arr2);
}