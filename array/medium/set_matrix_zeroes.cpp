#include <iostream>
#include <iterator>
using namespace std;
template <size_t rows, size_t cols>

void function(int (&arr)[rows][cols],int i, int j){
    for(int temp =0; temp<cols; temp++){
        if(arr[i][temp] == -1 && temp!=j) continue;
        arr[i][temp] = 0;
    }
    for(int temp=0; temp<rows; temp++){
        if(arr[temp][j] == -1 && temp!=i) continue;
        arr[temp][j] = 0;
    }
}

int main(){
    int arr[3][4] ;
    int rows = 3;
    int cols = 4;

    for(size_t  i = 0; i<3; i++){
        for(size_t  j=0; j<4; j++){
            cout<<"Index ["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }
    

    cout<<"Array before: "<<endl;
    for(int i = 0; i<rows; i++){
        cout<<"[ "<<arr[i][0];
        for(int j=1; j<cols; j++){
            cout<<", "<<arr[i][j];
        }
        cout<<" ]"<<endl;
    }

    for(int i = 0; i<rows; i++){
        for(int j =0; j<cols; j++){
            if(arr[i][j] == 0) arr[i][j] = -1;
        }
    }

    for(int i = 0; i<rows; i++){
        for(int j =0; j<cols; j++){
            if(arr[i][j] == -1) function(arr,i, j);
        }
    }

    cout<<"Array After: "<<endl;
    for(int i = 0; i<rows; i++){
        cout<<"[ "<<arr[i][0];
        for(int j=1; j<cols; j++){
            cout<<", "<<arr[i][j];
        }
        cout<<" ]"<<endl;
    }
    
    return 0;
}