#include <iostream>
#include <vector>
using namespace std;
int linear_search(vector <int> v, int n){
    for(int i=0; i<v.size(); i++){
        if(v.at(i) == n){
            return i;
        }
    }
    cout<<"Value not found";
    return 0;
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

    cout<<"Enter number you want to search: ";
    int k;
    cin>>k;

    cout << "Original vector: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int index = linear_search(arr, k);
    cout<<k<<" is present at "<<index<<"th index"<<endl;
}