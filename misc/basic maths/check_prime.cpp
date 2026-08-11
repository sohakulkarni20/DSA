#include <bits/stdc++.h>
using namespace std;

// AREY 
int main()
{
    int arr[1000] = {1,1,1,2,2,3,4};
    int ans[10];
    
        for(int i =0;i<7;i++)
    {
        ans[i]=0;
    }
    
            int ansIndex =0;
    
    for(int i = 0; i<7;i++)
    {
        int element = arr[i];
        int flag = 0;
        for(int j =0;j<7;j++)
        {
            if(element == ans[j])
            {
                flag = 1;
            }
            
        }
    if(flag==0)
    {
        ans[ansIndex] = element;
        ansIndex++;
    }
        
    }
    
    for(int i =0;i<ansIndex;i++)
    {
        cout<<ans[i]<<" ";
    }
}