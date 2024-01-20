#include<iostream>
using namespace std;
int main()
{
    int x,d,sum=0;
    cin>>x;
    while(x!=0)
    {
        d=x%10;
        sum+=d;
        x=x/10;
    }
    cout<<sum;
    
}