#include<iostream>
#include <stack>
#include <iterator>
using namespace std;

int main(){
    stack <int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(0);

    
    while(!st.empty()){
        cout << st.top() << endl;
        st.pop();
    }

    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    st.push(0);

    cout<<"print top"<<endl;
    cout<<st.top()<<endl;

    st.pop();
    
    cout<<"print size: "<<endl;
    cout<<st.size()<<endl;

    st.empty();

    stack <int> st1, st2;
    swap(st1, st2);

    return 0;
}