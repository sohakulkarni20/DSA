#include <iostream>
#include <stack>
using namespace std;

void lrucacheorganizer(int capacity){
    int flag = true;
    int choice = 0;
    int key, value;
    int arr[capacity];
    while(flag){
        cout<<"Enter the number of option that you want to perfom: "<<endl;
        cout<<"1. \tAdd/Edit an operation"<<endl;
        cout<<"1. \tObtain value of an operation"<<endl;
        cout<<"1. \tExit"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter key: ";
                cin>>key;
                cout<<"Enter Value: ";
                cin>>value;
            case 2:
                int key;
                cout<<"Enter key: ";
                cin>>key;
            case 3:
                flag = false;
        }
    }
}

int main(){
    int capacity = 0;
    cout<<"Enter capacity of the LRU cache: ";
    cin>>capacity;
    lrucacheorganizer(capacity);
    return 0;
}