#include<iostream>
using namespace std;
int main()
{
    int i,m,a,b;
    cin>>a>>b;
    for(i=1;i<=b;i++)
    {
        m=i*a;
        if(m%b==0)
        {
            cout<<m;
            break;
        }
    }
}