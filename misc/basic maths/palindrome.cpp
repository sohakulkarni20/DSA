#include<iostream>
using namespace std;
void check(int n){
    int rev=0;
    int dig=0;
    int temp = n;
    while(n>0){
        dig = n%10;
        rev = rev*10 + dig;
        n = n/10;
    }

    if(rev == temp){
        cout<<"It is a palindrome number"<<endl;
    }
    else{
        cout<<"It is not a palindrome number "<<endl;
    }
}

int main(){
    int number;
    cout<<"Enter a number to check if it is palindrome: ";
    cin>>number;
    check(number);

    return 0;
}