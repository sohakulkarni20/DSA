#include <iostream>
using namespace std;

void sorting(int arr[], int n){
    int count = 0;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(arr[j] > arr[j+1]){
                count++;
                swap(arr[j], arr[j+1]);
            }
        }
        if(count == 0) break;
        count = 0;
    }
    cout<<"Reesult: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[] = {13,46,24,52,20,9};
    int n = 6;
    sorting(arr, n);
    return 0 ;
}