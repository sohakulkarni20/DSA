#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int findmaxxing(vector<int> &v, int k){
    stack<int> s;
    int count =0;
    int sabsemaximum = v[0];

    for(int i=0; i<=v.size(); i++){
        if(count < k){
            s.push(v[i]);
            count++;
        }
        else if(count == k){
            int soha = s.top();
            cout<<"Max of window ["<<s.top();
            s.pop();
            while(!s.empty()){
                soha = max(soha, s.top());
                cout<<", "<<s.top();
                s.pop();
            }
            cout<<"] is "<<soha<<endl;
            sabsemaximum = max (sabsemaximum, soha);


            i = i - (k - (k -1)) -1;
            s.push(v[i]);
            count = 1;
        }
    }
    return sabsemaximum;
}

int approach1(vector<int> v){

}

int main(){

    vector<int> v = {4,0,-1,3,5,3,6,8, 15};
    cout<<"Array: ";
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int k =3;
    int maxi = findmaxxing(v, k);
    cout<<"Max: "<<maxi<<endl;
    return 0;
}