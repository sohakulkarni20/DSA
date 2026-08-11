#include <iostream>
#include <vector>
using namespace std;
int find_extra(vector <int> v){
    int extra=0;
    for(int i=0; i<v.size(); i++){
        extra = extra ^ v[i];
    }
    return extra;
}
int main(){
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    vector<int> arr;
    int v;
    cout << "Enter values in sorted manner:\n";
    for (int i = 0; i < size; i++) {
        cout << "At index " << i << " : ";
        cin >> v;
        arr.push_back(v);
    }
    cout << "Original vector: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int extra = find_extra(arr);
    cout<<"Extra is: "<<extra<<endl;
}