#include <iostream>
using namespace std;
int prec(char c){
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    else return -1;
}

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
            cout<<"Overflow!"<<endl;
            return;
        }
        currentIndex ++;
        stack [currentIndex] = x;
    }

    int pop(){
        if(this->currentIndex==-1){
            cout<<"Empty stack!"<<endl;
            return -1;
        }
        currentIndex--;
        return (stack[currentIndex+1]);
    }

    int top(){
        if(currentIndex == -1 ){
            cout<<"No elements present! "<<endl;
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

    string  s = "a+b*(c-d)"; 

    string result;

    myStack stack;
    stack.setsize(s.length());

    for(int i=0; i < s.length(); i++){

        if(s[i] == '('){
            stack.push('(');
            continue;
        }

        if(s[i] == '+' || s[i] == '-'){
            if(stack.isEmpty()){
                stack.push(s[i]);
                continue;
            }
            while(stack.top() == '^' || stack.top() == '*' || stack.top() == '/' || stack.top() == '-' || stack.top() == '+'){
                if(stack.top() == '^' || stack.top() == '*' || stack.top() == '/'|| stack.top() == '-' || stack.top() == '+'){
                    result+=stack.top();
                    stack.pop();
                }
            }
            stack.push(s[i]);
            continue;
        }

        if(s[i] == '*' || s[i] == '/'){
            if(stack.isEmpty()){
                stack.push(s[i]);
                continue;
            }
            while(stack.top() == '^' || stack.top() == '*' || stack.top() == '/'){
                if(stack.top() == '^' || stack.top() == '/' || stack.top() == '*'){
                    result+=stack.top();
                    stack.pop();
                }
            }
            stack.push(s[i]);
            continue;
        }

        if(s[i] == '^'){
            stack.push('^');
            continue;
        }

        if(s[i] == ')'){
            while(stack.top() != '('){
                result+=stack.top();
                stack.pop();
            }
            if(stack.top() == '('){
                stack.pop();
            }
            continue;
        }

        if(s[i] >= 'a' || s[i] <= 'z' || s[i] >= 'A' || s[i] <= 'Z' || s[i] >= 0){
            result += s[i];
        }
    }

    if(!stack.isEmpty()){
        while(!stack.isEmpty()){
            result+=stack.top();
            stack.pop();
        }
    }

    for(int i=0; i<result.length(); i++){
        cout<<result[i];
    }
    return 0;
}