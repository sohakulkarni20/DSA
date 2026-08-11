#include <iostream>
#include <vector>
using namespace std;
int count_subarr(vector <int> &v, int sum){
    // 3    1   2   4
    int count =0;
    int a=0;
    int cursum = 0;
    int left=0;
    while(a<v.size()){
        if(cursum<sum){
            cursum+=v[a];
        }
        if(cursum>sum){
            while(cursum>sum){
                cursum-=v[left];
                left++;
            }
        }
        if(cursum==sum){
            count++;
        }
        a++;
    }
    return count;
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
    cout<<"Enter required sum: ";
    int sum;
    cin>>sum;
    int max = 0;
    max = count_subarr(arr, sum);
    cout<<"Max: "<<max<<endl;
    return 0;
}