#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
bool two_sum(vector <int> v, int sum){
    unordered_map <int, int> map;
    int target = 0;
    for(int i=0; i<v.size(); i++){
        target = sum - v[i];
        if(map.find(target) != map.end()){
            return true;
        }
        else{
            map.emplace(v[i], v[i]);
        }
    }
    return false;
}
int main(){
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    vector<int> arr;
    int v;
    cout << "Enter values: \n";
    for (int i = 0; i < size; i++) {
        cout << "At index " << i << ": ";
        cin >> v;
        arr.push_back(v);
    }
    cout << "Original vector: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int sum =0;
    cout<<"Enter the sum you want to find: ";
    cin>>sum;
    bool flag = two_sum(arr, sum);
    if(flag == true){
        cout<<"Elements found!"<<endl;
    }
    else{
        cout<<"Element not found!!"<<endl;
    }
}