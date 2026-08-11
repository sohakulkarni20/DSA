#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){

    //vector
    vector<int> v;

    //add elements
    v.push_back(1);
    v.emplace_back(2);

    //show elements
    cout<<"iterating the vector: "<<endl;;
    for(int i=0; i < 2; i++){
        cout<<v[i]<<endl;
    }

    // vector of type pairs
    vector <pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    //initialising 5 instances of 100
    cout<<"iterating through another vector: "<<endl;
    vector <int> v1(5, 100);
    for(int i=0; i < 5; i++){
        cout<<v1[i]<<endl;
    }

    //container of size 5 being declared
    vector <int> v2(5);

    //passing a vector to a vector
    vector <int> v3(v2);

    vector <int> v4(20,1);
    //iterator doesnt point to an element by the memory address of the element 
    vector <int>::iterator it = v4.begin();
    cout<<"first element:"<<*(it)<<endl;

    //pointing to the next memory place
    it++;
    cout<<"element after ++: " <<*(it)<<endl;

    //pointing to the next 2 memory location
    it=it+2;
    cout<<"element after 2+: "<<*(it)<<endl;

    /*v.end doesnt point to the end element of a vector
    but it points to somewhere after the end element 
    in order to access the last element of the vector, use v.end() and then it--;   */ 
    it  = v4.end();
    it--;
    cout<<"element after -- :"<<*(it)<<endl;

    //v.back() = last element of the vector
    cout<<"last element: "<<v.back()<<endl;

    //another iteration
    cout<<"iteration through the vector: "<<endl;
    for(it=v4.begin(); it!=v4.end(); it++){
        cout<<*(it)<<endl;
    }

    cout<<"another iteration: "<<endl;
    for(auto it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<endl;
    }

    cout << "Size before erase: " << v4.size() << endl;

    v4.erase(v4.begin()+2);

    cout << "Size after erase: " << v4.size() << endl;
    cout<<"new iteration: "<<endl;
    for(it=v4.begin(); it!=v4.end(); it++){
        cout<<*(it)<<endl;
    }

    cout<<"iterating the vector: "<<endl;;
    v4.erase(v4.begin()+1, v4.begin()+5);
    for(it=v4.begin(); it!=v4.end(); it++){
        cout<<*(it)<<endl;
    }

    v.insert(v.begin(), 100);
    cout<<"iterating through v: "<<endl;
    for(it=v.begin(); it!=v.end(); it++){
        cout<<*(it)<<endl;
    }

    v.insert(v.begin()+2, 5);
    v.insert(v.begin()+3, 2, 10);
    vector <int> copy(3, 50);
    v.insert(v.begin(), copy.begin(), copy.end());

    cout<<v.size()<<endl;

    v.pop_back();
    
    v1.swap(v2);

    v1.empty();
    cout<<v1.size()<<endl;


    return 0;
}