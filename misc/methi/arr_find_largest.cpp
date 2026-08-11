#include<iostream>
using namespace std;


/*
use two pointers
ptr1 = 0th index
ptr2 = 1th index



//akh to fixed tha na 0th pr
//but waha rukha h na ptr2 ko jaha ptr1 ki value equal na ho ptr2 
// a= 0th index
m = first index
int temp = 0;
while(m<arr.size()){
if(a == m){
    m++;
}
else{
    a++;
    temp = arr[a];
    arr[a] = arr[m];
    arr[m] = temp;
    m++;
    }
}

//neend ari
//joro wali
    

agar 1 == 2 false hua, then we gotta swap
use liye m++ counter se bahar ana padega na
to swap kab krenge?
 





*/
int MAX=100;
void remove_duplicates(int arr[]){
    // [1,1,2,3,3]
    //agar ese kiya, new array banaya, usme visited element daale
    //and everytime we gotta add an element 
    //it will check if the element is present previously in visited ones
    //aur agar present hoga, to skip krdenge print krte time
    //or else add in arr
    //answer me array kyu chahiye😭😭😭 
    //correct
    //wahi wo complexity badhti jayegi
    //show
    int count=0;
    for(int i=0; i<5; i++){
        count =0;
        for(int j=0; j<5; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            cout<<"count is greater"<<endl;
        }
        if(count == 1){
            cout<<"unique element"<<endl;
            cout<<arr[i]<<endl;
        }
        
    }
}
//karu run?
//bhai kya tha wo
int main()
{
    cout<<"array:"<<endl;
    int arr[MAX];
    for(int i=0; i<5;i++){
        cin>>arr[i];
    }
    remove_duplicates(arr);
    return 0;
}
//iss baar hasi nahi rona agaya
//shit

