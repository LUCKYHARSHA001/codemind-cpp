#include<iostream>
using namespace std;
int main()
{
    int x,i;
    cin>>x;
    int temp=x,rev=0;
    while(x!=0)
    {
        rev=rev*10+x%10;
        x/=10;
    }
    if(temp==rev)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    
}