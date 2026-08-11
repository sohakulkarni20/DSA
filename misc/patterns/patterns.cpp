#include<iostream>
using namespace std;

int main(){

    /*
    ****
    ****
    ****
    ****
    */
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*\t";
        }
        cout<<"\n";
    }

    cout<<endl;

    /*
    *
    **
    ***
    ****
    *****
    */
    int soha;
    for(int i=0;i<=5;i++){
        soha = i+1;
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    soha++;
    cout<<soha;

    cout<<endl;

    /*
    1
    12
    123
    1234
    12345
    */
    for(int i=0; i<=5; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<endl;

    /*
    1
    22
    333
    4444
    55555
    */
    for(int i=1;i<=5; i++){
        for(int j=1; j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }

    cout<<endl;

    /*
    *****
    ****
    ***
    **
    *
    */
   int n = 5;
    for(int i= n; i>0; i--){
        for(int j=i; j>0; j--){
            cout<<"*";
        }
        cout<<endl;
    }

   cout<<endl;
   
    /*
    12345
    1234
    123
    12
    1
    */
    for (int i=n; i>0; i--){
        for (int j=1; j<=i; j++){
        cout<<j;
    }
    cout<<endl;
   }

   cout<<endl;
}