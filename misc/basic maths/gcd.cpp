#include <iostream>
using namespace std;

void findgcd(int n1, int n2){
    int limit ;
    if(n1>n2) limit = n2;
    else limit=n1;

    int gcd=1;

    cout<<"possible GCD's: ";
    for(int i=1; i<=limit; i++){
        if (n1% i ==0 && n2% i == 0){
            gcd = i;
            cout<<gcd<<"\t";
        }
    }

    cout<<"\nFinal gcd = "<<gcd<<endl;
    
}
int main(){
    cout<<"Enter first number: ";
    int no1, no2;
    cin>>no1;
    cout<<"Enter second number: ";
    cin>>no2;

    findgcd(no1, no2);
    
    return 0;
}