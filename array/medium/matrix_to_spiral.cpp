#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"enter number of rows: ";
    int rows, cols;
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>cols;
    int var;
    int arr[rows][cols];
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Visuals: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    // to_spiral(arr);
    int count = rows*cols;
    rows --;
    cols -- ;
    int r1 = 0;
    int c1 = 0;
    while(count>0){
        for(int i = c1; i<cols; i++){
            cout<<arr[r1][i]<<" ";
            count--;
        }
        for(int i=r1; i<rows; i++){
            cout<<arr[i][cols]<<" ";
            count--;
        }
        for(int i=cols; i>c1 ; i--){
            cout<<arr[rows][i]<<" ";
            count--;
        }
        for(int i=rows; i>r1; i--){
            cout<<arr[i][c1]<<" ";
            count--;
        }
        r1++;
        c1++;
        rows--;
        cols--;
    }
    return 0;
}