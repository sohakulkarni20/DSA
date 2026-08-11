#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int approach2(vector<int> &v){
    //actual kadane's algorithm 
    int left=0;
    int right =0;
    int max_sum =std::numeric_limits<int>::min();
    int cur_sum = 0;
    for(int i=0; i<v.size(); i++){
        cur_sum= v[i] + cur_sum;
        
        if(max_sum < cur_sum){
            max_sum = cur_sum;
            right = i;
        }
        if(cur_sum < 0){
            cur_sum =0;
            right = i+1;
            left = i+1;
        }
    }
    cout<<"Range: "<<endl;
    for(int i=left; i<=right; i++){
        cout<<v[i]<<" ";
    }
    return max_sum;
}

int main(){
    cout << "Enter size of array: ";
    int size;
    cin >> size;
    vector<int> arr;
    int v;
    cout << "Enter values in array:\n";
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
    int maxsum =0;
    maxsum=approach2(arr);
    cout<<"Max sum: "<<maxsum<<endl;
    return 0;
}