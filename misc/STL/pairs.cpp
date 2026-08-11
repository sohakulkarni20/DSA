#include <iostream>
using namespace std;
void pairs(){
    pair <int,int> p= {1,2};
    cout<<"First value: "<<p.first<<endl<<"Second value: "<<p.second<<endl;

    // nested pair
    pair <int, pair<int, int>> p1 = {1, {2,4}};
    cout<<p1.first<< " "<<p1.second.first<<" "<<p1.second.second<<endl;

    //pair array
    pair<int, int> arr[] = {{1,2}, {3,4}};
    cout<<arr[0].first<<" "<<arr[0].second<<" "<<arr[1].first<<" "<<arr[1].second<<endl;
}
int main(){
    pairs();
    return 0;
}