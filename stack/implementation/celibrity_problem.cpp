#include <bits/stdc++.h>
#include <array>
using namespace std;

int findcelibity(int arr[4][4]){
    int n = 4;
    int count = 0;
    int celebrity = -1;
    for(int i = 0; i<n; i++){
        count = 0;
        for(int j = 0; j<n; j++){
            if(i == j) continue;
            if(arr[i][j] == 1) count ++;
            if(count == n-1){
                for(int check =0; check<n; check++){
                    if(check == i) continue;
                    if(arr[check][i] == 1){
                        celebrity = i;
                        cout<<"No"<<endl;
                        break;
                    }
                }
                celebrity = i;
                break;
            }
        }
    }
    
}

int main(){
    int n = 3;
    n = 2;
    n = 4;

    int arr1[3][3]={{1, 1, 0}, 
                {0, 1, 0}, 
                {1, 1, 1}};

    int arr2[2][2] = {{1, 0}, {0, 1}};

    int arr[n][n] = {{0, 1, 1, 0}, {0, 0, 0, 0}, {1,1,0,0},{0, 1, 1, 0}};



    cout<<"Array: "<<endl;
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



    int celebrity = findcelibity(arr2);

    if(celebrity == -1){
        cout<<"No one present as celebrity!"<<endl;
    }
    else cout<<"Celebrity is "<<celebrity<<"th person"<<endl;


    return 0;
}