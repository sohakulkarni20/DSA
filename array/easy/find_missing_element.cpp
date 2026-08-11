#include <iostream>
#include <vector>
using namespace std;
int find_missing(vector <int> v){
    int target = v[0];
    for(int i=0; i<v.size(); i++){
        if(v[i]<target) target = v[i];
    }
    cout<<"Checking starts from: "<<target<<endl;
    bool found= false;
    while(true){
        found= false;
        for(int i=0; i<v.size(); i++){
            if(v[i] == target){
                found=true;
                break;
            }
        }
        if(!found) return target;
        target++;
    }
    return 0;
}

int missingNum(vector<int> &arr) {

    int n = arr.size() + 1;

    // Create hash array of size n+1
    vector<int> hash(n + 1, 0);

    // Store frequencies of elements
    for (int i = 0; i < n - 1; i++) {
        hash[arr[i]]++;
    }

    // Find the missing number
    for (int i = 1; i <= n; i++) {
        if (hash[i] == 0) {
            return i;
        }
    }
    return -1;
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
    int x = find_missing(arr);
    cout<<"Missing element was: "<<x<<endl;
    return 0;
}