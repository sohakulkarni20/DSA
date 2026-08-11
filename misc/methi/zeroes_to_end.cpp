#include <iostream>
#include <string.h>
#include <bitset>
#include <vector>
using namespace std;
vector <int> move_zeroes (vector <int> &v){
    int a = 0; 
    int b = v.size()-1;
    while(a<= b){
        if(v[a] != 0) a++;
        else if(v[b] == 0) b--;
        else if(v[a] == 0){
            swap(v[a] ,v[b]);
        }
        
    }
    return v;
}
vector <int> approach2(vector <int> &v){
    //where sequence of non zeroes numbers is not changed
    int a=0; 
    int b=1;
    while(b<v.size()){
        if(v[a] != 0){
            a++;
        }
        else if(v[b] == 0){
            b++;
        }
        else if(v[a] == 0){
            swap(v[a], v[b]);
        }
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
    arr = move_zeroes(arr);
    //arr = approach2(arr);
    cout << "Result: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}