#include <iostream>
using namespace std;

int counter = 1;

void printntimes(int n, int times){
    if (times == 0) return;
    cout<<n<<endl;
    printntimes(n, times-1);
}

void print_1_to_n(int no){
    if (no == 0) return;
    cout<<counter<<endl;
    if(counter == no ) return;
    counter++;
    print_1_to_n(no);
}

int main(){
    cout<<"Choose one option from the following: "<<endl;
    cout<<"1. Print a number n times"<<endl;
    cout<<"2. Print from 1 to n"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
        case 1:
            cout<<"Enter a number to print it n times: ";
            int n, times;
            cin>>n;
            cout<<"Enter how many times: ";
            cin>>times;
            printntimes(n, times);

        case 2:
            cout<<"Enter a number to print from 1 to n: ";
            int n1;
            cin>>n1;
            print_1_to_n(n1);
    }



    

    return 0;
}