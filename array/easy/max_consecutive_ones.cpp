#include <iostream>
#include <vector>
using namespace std;
int cons_ones(vector <int> v){
    int max=0;
    int current = 0;
    int a=0;
    while(a<v.size()){
        if(v[a] == 1){
            current =0;
            while(v[a] == 1){
                a++;
                current++;
                
            }
            if(current>max) max=current;
            a++;
        }
    }
    return max;
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
    int max= cons_ones(arr);
    cout<<"MAx ones: "<<max<<endl;
    return 0;
}