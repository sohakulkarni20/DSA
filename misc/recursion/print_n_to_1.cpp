#include <iostream>
using namespace std;

void print_n_to_1(int n){
    if(n==0) return;
    cout<<n<<"\t";
    print_n_to_1(n-1);
}
int main(){
    int n;
    cout<<"Enter a number to rpint from that number to 1: ";
    cin>>n;
    print_n_to_1(n);
    return 0;
}