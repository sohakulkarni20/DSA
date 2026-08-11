#include <iostream>
#include <vector>
using namespace std;
vector <int> rotate_by_1(vector <int> &v){
    int b=v.size()-1;
    int temp= v[b];
    while(b>0){
        v[b] = v[b-1];
        b--;
    }
    v[0] = temp;
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

    arr= rotate_by_1(arr);
    cout<<"New array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr.at(i)<<"\t";
    }
}