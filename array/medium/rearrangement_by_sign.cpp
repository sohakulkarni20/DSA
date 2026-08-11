#include <iostream>
#include <vector>
using namespace std;
vector<int> rearrange(vector<int> &v){
    int pos=0;
    int neg=1;
    while(pos < v.size() && neg<v.size()){
        if(v[pos] >0) pos = pos+2;
        if(v[neg] < 0) neg = neg+2;
        if(v[pos] <0 && v[neg] >0) swap(v[pos], v[neg]);
    }
    return v;
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
    arr = rearrange(arr);
    cout<<"Result: "<<endl; 
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}