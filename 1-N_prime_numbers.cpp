#include <bits/stdc++.h> 
using namespace std;
int isprime(int n)
{int i;
if(n==1)
return 0;
    if (n==2 || n ==3)
    return 1;
    if(n%2==0 || n%3==0)
    return 0;
    for(i=5;i<=sqrt(n);i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        return 0;
    }
    return 1;
}
int main()
{ 
    int l,h,i;
    scanf("%d %d",&l,&h);
    for(i=l;i<=h;i++)
    { 
        if(isprime(i)==1)
        printf("%d ",i);
    }
    return 0;
}
