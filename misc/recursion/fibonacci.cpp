#include <iostream>
using namespace std;

void fibonacci(int range){
    
    int counter = 0; 
    int sum =0;
    int n1 = 0;
    int n2 = 1;

    cout<<"Series:\t";

    if (range >2){
        counter =2;
        cout<<0<<"\t"<<1<<"\t";
    }
    else if (range ==2){
        cout<<0<<"\t"<<1<<"\t";
        return;
    }
        
    while(counter!= range){
        sum = n1 + n2;
        cout<<sum<<"\t";
        n1 = n2;
        n2 = sum;
        counter ++;
    }

}

int main(){
    cout<<"how many numbers in the fibonacci series do you want?";
    int range;
    cin>>range;
    fibonacci(range);
    return 0;
}