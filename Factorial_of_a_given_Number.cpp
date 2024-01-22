#include<iostream>
using namespace std;
int main()
{
    int n,m=1,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        m*=i;
    }
    cout<<m;
    
}