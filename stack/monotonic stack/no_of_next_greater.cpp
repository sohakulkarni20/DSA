#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Enter elements, insert 440 to stop"<<endl;
    int var;
    vector <int> v;
    for(int i=0; i<100; i++){
        cout<<"At index "<<i<<" --> ";
        cin>>var;
        if(var == 440) break;
        v.push_back(var);
    }

    cout<<"Array: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int count = 0;
    vector <int> ans;

    for(int i=0; i<v.size(); i++){
        count = 0;
        for(int j=i; j<v.size(); j++){
            if(v[j] > v[i]) count++;
        }
        ans.push_back(count);
    }

    cout<<"Answer Array: ";
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}