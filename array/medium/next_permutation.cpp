#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

void func(int index, vector<int> &v, vector<vector<int>> &ans){
    //find all possible permutations
    if(index == v.size()){
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
        ans.push_back(v);
        return;
    }
    for(int i=index; i<v.size(); i++){
        swap(v[index], v[i]);
        func(index+1, v, ans);  
        swap(v[index], v[i]);  
    }
}

void approach2(vector <int> &v){
    cout<<"Next greater permutation: "<<endl;
    next_permutation(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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

    vector <vector<int>> ans;
    func(0, arr, ans);
    
    approach2(arr);
    return 0;
}