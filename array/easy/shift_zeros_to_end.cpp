#include <iostream>
#include <vector>
using namespace std;
vector <int> shift_zeroes_to_end(vector <int> &v){
    int a=0, b=v.size()-1;
    while(a<b){
        if(v[a] != 0){
            a++;
        }    
        else if(v[b] == 0){
            b--;
        }
        else{
            swap(v[a],v[b]);
            a++;
            b--;
        }
    }
    return v;
}

vector <int> shift_zeroes_to_end_approach2(vector <int> &v){
    vector <int> v2;
    for(int i=0; i<v.size(); i++){
        if(v.at(i) > 0 ){
            v2.push_back(v.at(i));   
        }
    }
    return v2;
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
    arr= shift_zeroes_to_end(arr);
    //arr = shift_zeroes_to_end_approach2(arr);
    cout<<"Answer:"<<endl;
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    return 0;
}