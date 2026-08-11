#include <iostream>
#include <vector>
using namespace std;

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
    return 0;
}