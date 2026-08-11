#include<iostream>
using namespace std;

int rev(int no){
    int n = no;
    int revn=0;
    int dig;
    while(n>0){
        dig = n%10;
        revn = revn*10 + dig;
        n=n/10;
    }
    return revn;

}

int main(){
    cout<<"enter a number to reverse : "<<endl;
    int numeral;
    cin>>numeral;
    cout<<"the reversed number obtained is: "<<rev(numeral)<<endl;

    return 0;
}