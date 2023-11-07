#include <iostream>
using namespace std;
int fact(int n)
{
    int p=1,i;
    for(i=1;i<=n;i++)
    p=p*i;
    return p;
}
int main()
{
    int n,r;
    float ans;
    cin>>n>>r;
    ans=(fact(n)/(fact(r)*fact(n-r)));
    cout<<ans;
    return 0;
}
