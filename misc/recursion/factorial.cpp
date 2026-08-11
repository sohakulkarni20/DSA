#include <iostream>
using namespace std;

int factorial = 1;

void fact(int n){
    if (n==0) {
        cout<<"Factorial = "<<factorial<<endl;
        return;
    }
    factorial*= n;
    fact(n-1);
}

int main(){
    cout<<"Enter a number to find the factorial of: ";
    int n;
    cin>>n;
    fact(n);
}