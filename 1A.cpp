#include <iostream>
using namespace std;;
int main()
{
    long long n,m,a,b,c;
    cin>>n>>m>>a;
    if(n%a!=0)
    {
        b=(n/a)+1;
    }
    else
    {
        b=n/a;
    }
    if(m%a!=0)
    {
        c=(m/a)+1;
    }
    else
    {
        c=m/a;
    }
    cout<<b*c;
}