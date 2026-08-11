#include <iostream>
#include <vector>
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
    cout<<"Enter elements, insert 440 to stop"<<endl;
    int var;
    myStack stack;
    vector <int> v;
    for(int i=0; i<100; i++){
        cout<<"At index "<<i<<" --> ";
        cin>>var;
        if(var == 440) break;
        v.push_back(var);
    }

    stack.setsize(v.size());
    cout<<"Array: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    stack.push(v[v.size()-1]);
    v[v.size()-1] = -1;

    for(int i=v.size()-2; i>=0; i--){
        
        if(stack.top()>v[i]){
            int temp = stack.top();
            stack.push(v[i]);
            v[i] = temp;     
        }
        else{
            while(!stack.isEmpty() && stack.top()<= v[i]){
                stack.pop();
            }
            if(stack.isEmpty()){
                stack.push(v[i]);
                v[i] = -1;
                continue;
            }
            int temp = stack.top();
            stack.push(v[i]);
            v[i] = temp;
        }
    }
    cout<<"Result array: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}