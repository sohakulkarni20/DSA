#include <iostream>
using namespace std;
int sum = 0;

void sum_of_n(int range){
    if (range == 0){
        cout<<"Sum = "<<sum;
        return;
    }
    sum = sum + range;
    sum_of_n(range-1);
}

int main(){
    cout<<"Sum of first n number starting from 1 to: ";
    int range;
    cin>>range;
    sum_of_n(range);
}