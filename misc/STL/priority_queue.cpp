#include <iostream>
#include <queue>
using namespace std;

int main(){
    priority_queue <int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(4);
    pq.push(5);
    pq.emplace(100);

    pq.pop();
    priority_queue <int> temp = pq;
    cout<<"priority queue look like: "<<endl;
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }

    priority_queue <int, vector <int>, greater <int>> pyq;
    pyq.push(1);
    pyq.push(2);
    pyq.push(3);
    pyq.emplace(100);

    cout<<pyq.top()<<endl;


    return 0;
}