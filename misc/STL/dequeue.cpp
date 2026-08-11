#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque <int> dq;

    dq.push_back(1);
    dq.push_front(2);
    dq.emplace_back(5);
    dq.emplace_front(6); 
    dq.back() += 5;

    deque <int>::iterator it=dq.begin();
    
    for(it=dq.begin(); it!=dq.end(); it++){
        cout<<*it<<endl;
    } //{6,2,1,5}

    cout<<* dq.begin()<<endl;

    it = dq.end();
    it--;
    cout << *it << endl;

    cout<<"all the elements: "<<endl;
    for(auto it = dq.begin(); it != dq.end(); it++) {
        cout << *it <<endl;
    }

    return 0;
}