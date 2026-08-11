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

int prec(string s){
    if(s == "^") return 3;
    else if (s == "*" || s == "/") return 2;
    else if (s == "+" || s == "-") return 1;
    else if (s == "(" || s== ")") return 0;
    else return -1;
}

int prec(char s){
    if(s == '^') return 3;
    else if (s == '*' || s == '/') return 2;
    else if (s == '+' || s == '-') return 1;
    else if (s == '(' || s== ')') return 0;
    else return -1;
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
            return "";
        }
        currentIndex--;
        return (stack[currentIndex+1]);
    }

    string top(){
        if(currentIndex == -1 ){
            return "";
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

void infix_to_prefix(string &s){
    myStack stack;
    stack.setsize(s.length());

    string result = "";
    for(int i=0; i<s.length();i++){
        if(s[i] == ')'){
            stack.push(s[i]);
            continue;
        }
        else if(std::isalpha(s[i])){
            result+= s[i];
            continue;
        }
        else if(s[i] == '('){
            while(stack.top() != ")"){
                result+= stack.top();
                stack.pop();
            }
            if(stack.top() == ")"){
                stack.pop();
            }
            continue;
        }
        else if(s[i] == '*' || s[i] == '/' || s[i] == '^' || s[i] == '+' || s[i] == '-'){
            if(prec(s[i]) > prec(stack.top())){
                stack.push(s[i]);
                continue;
            }
            else if(prec(s[i]) <= prec(stack.top())){
                while(prec(s[i]) <= prec(stack.top())){
                    result+= stack.top();
                    stack.pop();
                }
                stack.push(s[i]);
                continue;
            }
            stack.push(s[i]);
            continue;
        }  
    }
    if(!stack.isEmpty()){
        while(!stack.isEmpty()){
            result+=stack.top();
            stack.pop();
        }
    }
    rev(result);
    stack.show(result);
}

int main(){
    string s = "";
    s = "a+b";
    s= "x+y*z/w+u";
    rev(s);
    infix_to_prefix(s);
}