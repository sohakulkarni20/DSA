#include <iostream>
#include <vector>
using namespace std;

int longest_subarray(vector <int> v, int sum){
    int curr_sum = 0, count = 0, max_count =0, a=0;
    for(int i=0; i<v.size(); i++){
        a=i;
        curr_sum=0;
        count=0;
        while(curr_sum< sum){
            curr_sum=curr_sum + v[a];
            a++;
            count++;
        }
        if(curr_sum == sum){
            if(count>max_count) max_count= count; 
        }
    }
    return max_count;
}

int approach2(vector<int> &v, int summain){
        int maxLen = 0;
        // Pointers to mark the start and end of window
        int left = 0, right = 0;
        
        // To store the sum of elements in the window
        int sum = v[0];
        
        // Traverse all the elements
        while(right < v.size()) {
            
            // If the sum exceeds K, shrink the window
            while(left <= right && sum > summain) {
                sum -= v[left];
                left++;
            }
            
            // store the maximum length
            if(sum == summain) {
                maxLen = max(maxLen, right - left + 1);
            }
            
            right++;
            if(right < v.size()) sum += v[right];
        }
        
        return maxLen;
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
    int sum=0;
    cout<<"Enter required sum: ";
    cin>>sum;
    int result;
    //result = longest_subarray(arr, sum);
    result = approach2(arr,sum);
    cout<<"Largest length of subarray is "<<result<<" with the given sum as "<<sum<<endl;
    return 0;
}