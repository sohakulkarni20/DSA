#include <iostream>
#include <vector>
using namespace std;
int moore_voting(vector<int> &v){
    int candidate = v[0];
    int count=0;
    for(int i=0; i<v.size(); i++){
        if(count == 0) candidate = v[i];
        if(v[i] == candidate){
            count++;
        }
        else if(v[i] != candidate){
            count--;
        }
    }
    return candidate;
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
    int max =0;
    max = moore_voting(arr);
    cout<<"Majority is: "<<max;
    return 0;
}