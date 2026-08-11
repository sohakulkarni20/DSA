#include<iostream>
#include <set>
using namespace std;
int main(){

    set <int> st;

    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.emplace(4);

    set <int>:: iterator c = st.begin();

    c = st.find(4);
    cout<<"found 4: "<<*c<<endl;

    st.erase(4);
    set <int> s = st;
    cout<<"this is how th set looks\n";
    while(!s.empty()){
        cout<<*s.begin()<<endl;
        s.erase(s.begin());
    }

    c = st.find(3);
    st.erase(c);

    cout<<st.count(2)<<endl;

    return 0;
}