#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n = 7;
    int v[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            v[i][j] = 0;
        }
    }

    int a = 1;
    v[0][0] = 1;
    for(int i = 1; i<n; i++){
        v[i][0] = 1;
        a = 1;
        while(a < i){
            v[i][a] = (v[i-1][a-1] + v[i-1][a]);
            a++;
        }
        v[i][i] = 1;
        
    }

    cout<<"Result: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(v[i][j] == 0){
                cout<<" ";
                continue;
            }
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}