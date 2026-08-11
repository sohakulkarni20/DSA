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
        stack [currentIndex] = x;
    }

    void push(char x){
        if(currentIndex == capacity-1){
            return;
        }
        currentIndex ++;
        stack [currentIndex] = x;
    }

    string pop(){
        if(this->currentIndex==-1){
            return " ";
        }
        currentIndex--;
        return (stack[currentIndex+1]);
    }

    string top(){
        if(currentIndex == -1 ){
            return " ";
        }
        return stack[currentIndex];
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

    void show(string s){
        for(int i=0; i<s.length(); i++){
            cout<<s[i];
        }
    }
};

void postfix_to_prefix(string &s){

    myStack stack;
    stack.setsize(s.length());

    for(int i=0; i<s.length();i++){
        
        if(std::isalpha(s[i])){
            stack.push(s[i]);
            continue;
        }

        else if(s[i] == '^' || s[i] == '*' || s[i] == '/' || s[i] == '+' || s[i] == '-'){
            string result;
            result =  result +'(' +  s[i];  
            result+= stack.top();
            stack.pop();
            result+=stack.top() + ')';
            stack.pop();
            stack.push(result);
        }
    }
    stack.show(stack);
}

int main(){
    string s = "abc*+d-";
    // "-+a*bcd"
    postfix_to_prefix(s);
}