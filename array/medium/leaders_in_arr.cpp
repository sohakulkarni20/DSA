#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void find_greater(const vector<int> &v){
    if(!v.empty()){
    int target = v[v.size()-1];
    vector<int> result;
    for(int i= v.size() - 1; i>=0; i--){
        if(v[i] >= target){
            result.push_back(v[i]);
            target = v[i];
        }
    }
    for(int i = result.size()-1; i>=0; i--){
        cout<<result[i]<<" ";
    }
}
}
int main(){
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    vector<int> arr;
    int v;
    cout << "Enter values in array:\n";
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
    find_greater(arr);
    return 0;
}