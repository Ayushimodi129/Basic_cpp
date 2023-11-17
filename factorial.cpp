#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,prod=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        prod=prod*i;
    }
    cout<<prod;
    return 0;
}
