#include <iostream>
#include <vector>
using namespace std;

vector<int> sort012 (vector<int> &v){
    int low=0, mid=0, high=v.size()-1;
    while(mid<=high){
        if(v[low] == 0) low++;
        if(v[mid] == 1) mid++;
        if(v[high] == 2) high--;

        if(v[mid] == 0) swap(v[low], v[mid]);
        if(v[mid] == 2) swap(v[mid], v[high]);
    }
    return v;
}
vector <int> approach2(vector<int> &v){
    int low=0, mid=0, high=v.size()-1;
    while(mid<=high){
        if(v[mid] == 0){
            swap(v[low], v[mid]);
            mid++;
            low++;
        }
        else if(v[mid] == 2){
            swap(v[mid], v[high]);
            high--;
        }
        else if(v[mid] == 1) mid++;
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
    //arr = sort012(arr);
    arr = approach2(arr);
    cout << "Result: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}