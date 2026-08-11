#include <iostream>
#include <cmath>
using namespace std;

void check(int n){
    int dig=0;
    int temp = n;
    int temp1 = temp;
    if(n == 0)  dig = 1;
    while(n>0){
        n = n/10;
        dig++;
    }
    cout<<"No. of digits: "<<dig<<endl;

    int sum = 0;
    int d =0;

    while(temp > 0){
        d = temp % 10;
        sum += round(pow(d, dig));
        temp /= 10;
        cout << "d = " << d << ", sum = " << sum << endl;
    }

    if(temp1==sum){
        cout<<"Number is armstrong"<<endl;
    }else{
        cout<<"Not an armstrong"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter a number to check if it is armstrong or not: ";
    cin>>n;
    check(n);
    return 0;
}