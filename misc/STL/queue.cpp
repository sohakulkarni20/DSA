#include  <iostream>
#include <queue>
using namespace std;

int main(){
    queue <int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.emplace(100);

    q.back() += 5;
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();

    queue <int> temp =q;
    cout<<"queue appearence: "<<endl;
    while(!temp.empty()){
        cout<<temp.front()<<endl;
        temp.pop();
    }
    
    return 0;
}