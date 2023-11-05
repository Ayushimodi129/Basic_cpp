#include <iostream>
using namespace std;
int main()
{ 
    int n,f1=0,f2=1,f3,i,j;
    cin>>n;
    if(n==1)
        cout<<"0";
    else if (n==2)
        cout<<"0 1";
    else
    {
        cout<<"0 1 ";
        for(i=2;i<n;i++)
            {
              f3=f1+f2;
              f1=f2;
              f2=f3;
              cout<<f3<<" ";    
            }
    }
    return 0;
    }
