#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int longest_cons_seq(vector <int> &v){
    int a=1;
    int count=0;
    int maxcount =0;
    while(a<v.size()){
        if(v[a] == (v[a-1]+1)) count ++;
        else count = 0;
        maxcount  = max(count, maxcount);
        a++;
    }
    return maxcount;
}

int approach2(vector<int> &v){
    unordered_set<int> st;
    for(int i= 0; i<v.size(); i++){
        st.insert(v[i]);
    }
    int cnt = 1;
    int x = 0;
    int longest = 0;
    for(int i=0; i<v.size(); i++){
        if(st.find(x-1) == st.end()){
            cnt =1;
            x = v[i];
            while(st.find(x+1) != st.end()){
                x++;
                cnt++;
            }
        }
        longest = max(longest, cnt);
    }
    return longest;
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
    int count=0;
    count = longest_cons_seq(arr);
    cout<<"Longest consecutive sequence is "<<count<<endl;
    return 0;
}