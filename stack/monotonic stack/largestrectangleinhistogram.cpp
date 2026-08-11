#include <iostream>
#include <vector>
using namespace std;
int maxrect(vector<int> &v){
    int cursum = 0;
    int maxsum = 0;
    int n = 0;
    int i = 0;
    while(n<v.size()){
        i = n;
        cursum = 0;
        while(i < v.size()){
            //right iteration
            if(v[i] >= v[n]) i++;
            else break;
            cursum += v[n];
        }
        
        i = n-1;
        
        while(i >= 0){
            //left iteration
            if(v[i] >= v[n]) i--;
            else break;
            cursum+= v[n];
        }
        n++;
        maxsum = max(cursum, maxsum);
    }
    return maxsum;
}
int main(){
    vector<int> v = {2,1,5,6,2,3};
    v = {5};
    v = {2, 2};
    v = {2,1,5,6,2,3};
    v = {2, 4};
    v = {6,2,5,4,5,1,6};
    v = {1, 2, 3, 4, 5};
    v = {5, 4, 3, 2, 1};
    v = {1, 1, 1, 1, 1};
;    cout<<"Max rect = "<<maxrect(v)<<endl;
    return 0;
}