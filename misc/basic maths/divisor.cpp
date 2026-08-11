#include <iostream>
using namespace std;

void find_divisors(int n){
    cout<<"Possible divisors are: ";
    for(int i=1; i<=n; i++){
        if(n%i == 0){
            cout<<i<<"\t";
        }
    }
}

int main(){
    int n;
    cout<<"Enter a number to find its divisors: ";
    cin>>n;
    find_divisors(n);
}