#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<"Weird";
    }
    else if(n%2==0 && 2<=n && n<=5)
    {
        cout<<"Not Weird";
    }
    else if(n%2==0 && 6<=n && n<=20 )
    {
        cout<<"Weird";
    }
    else if(n>20 && n%2==0)
    {
        cout<<"Not Weird";
    }
    else {
    {
        cout<<"weird";
    }
    }
}
