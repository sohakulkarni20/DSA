#include <iostream>
#include <vector>
using namespace std;
vector <int> sort_012 (vector <int> &v){
    int count0 =0, count1 = 0, count2 =0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0) count0++;
        else if(v[i] == 1) count1++;
        else if(v[i] == 2) count2++;
    }
    count1 = count0 + count1;
    count2 += count1;
    int index =0;
    int target =0;
    while(index<v.size()){
        v[index] = target;
        index++;
        if(index == count0) target++;
        if(index == count1) target++;
    }
    return v;
}
vector <int> approach2(vector <int> &v){
    int low = 0, mid = 0, high = v.size()-1;
    while(mid<=high){    
        if(v[mid] ==0){
            swap(v[low],v[mid]);
            low++;
            mid++;
        }
        else if(v[mid] == 1) mid++;
        else if(v[mid] == 2 ){
            swap(v[mid], v[high]);
            high--;
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
    //arr = sort_012(arr);
    arr = approach2(arr);
    cout<<"Result:"<<endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}