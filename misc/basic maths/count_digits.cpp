#include <iostream>
using namespace std;

int main(){
    cout<<"please enter a number : ";
    int n;
    cin>>n;
    int dig=0;

    while(n>0){
        dig++;
        n = n/10;
    }

    cout<<dig<<endl;

    return 0;
}