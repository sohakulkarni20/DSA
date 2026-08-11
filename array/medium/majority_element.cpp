#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int find_majority(vector <int> v){
    int n =v.size();
    int max=0, cur=0;
    int var = v[0];
    for(int i=0; i<n; i++){
        cur =0;
        for(int j=0; j<n; j++){
            if(v[j] == v[i]){
                cur ++;
            }
            if(cur>(n/2)) {
                cout<<"(early exit) Max element: "<<var<<endl;
                return max;
            }
        }
        if(max<cur) {
            var = v[i];
            max = cur;
        }
    }
    cout<<"Max element: "<<var<<endl;
    return max;
}
/*int approach2(vector <int> v){
    int n = v.size();
    //using hashmap
    unordered_map <int, int> map;
    for(int i=0; i<n; i++){
        if(!map.find(v[i])){
            map[v[i]] = 1;
        }
        else{
            map[v[i]]++;
            
        }
    }
    
}*/

int approach3(vector<int> &v){
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
    int num=0;
    //num = find_majority(arr);
    num = approach3(arr);
    cout<<"Majority numnber: "<<num<<endl;
    return 0;
}