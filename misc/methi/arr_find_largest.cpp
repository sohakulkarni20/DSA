#include<iostream>
using namespace std;



int MAX=100;
void remove_duplicates(int arr[]){
    
    //show
    int count=0;
    for(int i=0; i<5; i++){
        count =0;
        for(int j=0; j<5; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            cout<<"count is greater"<<endl;
        }
        if(count == 1){
            cout<<"unique element"<<endl;
            cout<<arr[i]<<endl;
        }
        
    }
}

int main()
{
    cout<<"array:"<<endl;
    int arr[MAX];
    for(int i=0; i<5;i++){
        cin>>arr[i];
    }
    remove_duplicates(arr);
    return 0;
}


