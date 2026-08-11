#include <iostream>
#include <cctype>
using namespace std;

string rev (string &s){
    int left =0;
    int right = s.length()-1;
    for(int i=0; i<s.length()/2; i++){
        swap(s[left], s[right]);
        left++;
        right--;
    }
    return s;
}

class myStack{

    public:
    int currentIndex = -1;
    int capacity = 0;
    string stack[100];

    void setsize(int n){
        capacity = n;
    }

    void push(string x){
        if(currentIndex == capacity-1){
            return;
        }
        currentIndex ++;
        stack[currentIndex] = x;
    }

    void push(char x){
        if(currentIndex == capacity-1){
            return;
        }
        currentIndex ++;
        stack[currentIndex] = x;
    }

    string pop(){
        if(this->currentIndex==-1){
            return "NO";
        }
        currentIndex--;
        return (stack[currentIndex+1]);
    }

    string top(){
        if(currentIndex == -1 ){
            return "NO";
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

int prec(char c){
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    else return -1;
}

void prefixtoinfix(string &s){
    myStack stack;
    stack.setsize(s.length()+10);
    
    for(int i=0; i<s.length(); i++){

        if(std::isalpha(s[i])){
            stack.push(s[i]);
            continue;
        }

        else if(s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-'){
            string result = "(" + stack.top() + s[i];
            stack.pop();
            result+=stack.top();
            result+=')';
            stack.pop();
            stack.push(result);
        }
    }

    cout<<"After: ";
    stack.show(stack);
    cout<<endl;
}

int main(){
    string s = "*-A/BC-/AKL";
    
    cout<<"Before: ";
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }
    s = rev(s);
    cout<<endl;
    prefixtoinfix(s);

}