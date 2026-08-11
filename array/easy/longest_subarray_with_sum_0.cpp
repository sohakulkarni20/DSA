#include <iostream>
#include <vector>
using namespace std;


int longest_subarray(vector <int> v){
    int sum = 0;
    int curr_sum = 0, count = 0, max_count = 0, a = 0;

    for(int i=0; i<v.size(); i++){

        a=i;
        curr_sum=0;
        count=0;

        while(a<v.size()){
            if(curr_sum ==sum && count>1){
                if(count>max_count) max_count= count; 
                break;
            }
            curr_sum=curr_sum + v[a];
            a++;
            count++;
        }

        if(curr_sum ==sum){
            if(count>max_count) max_count= count; 
        }
    }
    return max_count;
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
    int result = longest_subarray(arr);
    cout<<"Largest length of subarray is "<<result<<" with the given sum as 0"<<endl;
    return 0;
}