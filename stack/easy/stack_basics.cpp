#include <iostream>
using namespace std;
class myStack{

    public:
    int currentIndex = -1;
    int capacity = 0;
    int stack[100];

    void setsize(int n){
        capacity = n;
    }

    void push(int x){
        if(currentIndex == capacity-1){
            return;
        }
        currentIndex ++;
        stack [currentIndex] = x;
    }

    int pop(){
        if(this->currentIndex==-1){
            return -1;
        }
        currentIndex--;
        return (stack[currentIndex+1]);
    }

    int top(){
        if(currentIndex == -1 ){
            return -1;
        }
        return (stack[currentIndex]);
    }

    bool isEmpty(){
        if(currentIndex == -1) return true;
        else return false;
    }

    bool isFull(){
        if(currentIndex == capacity-1) return true;
        else return false;
    }

    int no_of_elements_present(){
        return currentIndex+1;
    }

    void show(myStack temp){
        for(int i=0; i<=this->currentIndex; i++){
            if(temp.currentIndex == -1) break;
            cout<<temp.pop()<<" ";
        }
        cout<<endl;
    }
};
int main(){
    myStack s;
    s.setsize(5);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.show(s);
    
    cout<<s.pop()<<endl;
    s.show(s);

    cout<<s.isEmpty()<<endl;
    cout<<s.isFull()<<endl;
    cout<<s.no_of_elements_present()<<endl;

    return 0;
}