 #include <iostream>
 using namespace std;
 
 int main(){
    int n =5; 

    /*
        *    
       ***   
      *****  
     *******
    *********
   */
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }
    for(int k=0; k<2*i+1; k++){
        cout<<"*";
    }
    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
  }

  cout<<endl;

  /*
  *********
   *******
    *****
    ***
     *
  */
   for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=0; j < 2*n - (2*i+1); j++){
            cout<<"*";
            
        }
        for(int j=1; j<=n; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    /*
        *    
       ***   
      *****  
     *******
    *********
    *********
     *******
      *****
       ***
        *
    */
    for(int i=0; i<n; i++){
    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }
    for(int k=0; k<2*i+1; k++){
        cout<<"*";
    }
    for(int j=0; j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout<<" ";
        }
        for(int j=0; j < 2*n - (2*i+1); j++){
            cout<<"*";
            
        }
        for(int j=1; j<=n; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    /*
    *
    **
    ***
    ****
    *****
    ****
    ***
    **
    *
    */
   for(int i=0; i<2*n-1; i++){
        int stars=i;
        if(i>n){
            stars = 2*n-i;
        }
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    cout<<endl;

    /*
    1
    12
    123
    1234
    12345
    */

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        cout<<endl;
    }

    cout<<endl;

    int start=1;
    for(int i=0; i<n; i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0; j<=i; j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }

    cout<<endl;

    /*
    1      1
    12    21
    123  321
    12344321
    */
   int space = 2* (n-1);
   for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space =space-2;
   }

   cout<<endl;

   /* 
   1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15
   */
  int count =1;
   for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
   }

   cout<<endl;

   /*
   A
   AB
   ABC
   ABCD
   ABCDE
   */
   for(int i=0; i<n; i++){
    for(char ch ='A'; ch<='A'+ i; ch++){
        cout<<ch;
    }
    cout<<endl;
   }

   cout<<endl;

   /*
   ABCDE
   ABCD
   ABC
   AB
   A
   */
   for(int i=0; i<n; i++){
    for(char ch='A'; ch<='A'+(n-i-1); ch++){
        cout<<ch<<" ";
    }
    cout<<endl;
   }

   cout<<endl;

   /*
   A
   BB
   CCC
   DDDD
   EEEEE
   */
   for(int i=0; i<n; i++){
    char ch= 'A'+i;
    for(int j=0; j<=i; j++){
        cout<<ch<<" ";
    }
    cout<<endl;
   }

   cout<<endl;

   /*
         A    
        BCD   
       EFGHI  
      JKLMNOP 
     QRSTUVWXY
   */
  char ch = 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<ch;
            ch++;
        }
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
        }
        cout<<"\n";
    }

    cout<<endl;

    /*
        A
       ABA
      ABCBA
     ABCDCBA
    */
   
   for(int i=1; i<n;i++){
        for(int j=0;j<n-i-1; j++){
            cout<<" ";
        }
        char ab = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1; j++){
            cout<<ab;
            if(j<=breakpoint){
                ab++;
            }else ch--; 
        }
        for(int j=0;j<n-i-1; j++){
            cout<<" ";
        }
        cout<<endl;
   }

   cout<<endl;

   /*
   E
   D E
   C D E
   B C D E
   A B C D E
   */
   for(int i=0; i<n; i++){
        for(char ch='E'-i;ch<='E'; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
   }

   cout<<endl;

   /*
   **********
   ****  ****
   ***    ***
   **      **
   *        *
   **      **
   ***    ***
   ****  ****
   **********
   */
  int iniS=0;
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i; j++){
        cout<<"*";
    }
    for(int j = 0; j<iniS; j++){
        cout<<" ";
    }
    for(int j=0; j<n-i; j++){
        cout<<"*";
    }
    iniS=iniS+2;
    cout<<endl;
  }
   iniS= 2*n-2;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j = 0; j<iniS; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        iniS=iniS-2;
        cout<<endl;
  }

    cout<<endl;

    /*
    *       *
    **     **
    ***   ***
    **** ****
    *********
    **** ****
    ***   ***
    **     **
    *       *
    */
    int spaces = 2*n-2;
    for(int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n)stars = 2*n-i;

        for(int j=1; j<=stars; j++){
            cout<<'*';
        }
        for(int j =1; j<=spaces; j++){
            cout<<" ";
        }
        for(int j=1 ; j<=stars; j++){
            cout<<'*';
        }
        cout<<endl;
        if (i<n) spaces=spaces-2;
        else spaces=spaces+2;

    }

    cout<<endl;

    /*
    * * * *
    *     *
    *     *
    * * * *
    */
   for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        if(i==0 || j==0 || i==n-1 || j==n-1){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }
            cout<<endl;
   }

   cout<<endl;

   
    return 0;
 }