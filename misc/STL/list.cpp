#include <iostream>
#include <list>
using namespace std;

int main(){
    list <int> ls;
    ls.push_back(1);
    ls.push_front(2);
    ls.emplace_back(5);
    ls.emplace_front(6); 
    list <int>::iterator it=ls.begin();
    for(it=ls.begin(); it!=ls.end(); it++){
        cout<<*it<<endl;
    } //{6,2,1,5}

    cout<<* ls.begin()<<endl;

    it = ls.end();
    it--;
    cout << *it << endl;

    cout<<"all the elements: "<<endl;
    for(auto it = ls.begin(); it != ls.end(); it++) {
        cout << *it <<endl;
    }

    return 0;
}