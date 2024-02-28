#include<iostream>
using namespace std;
void sort(int *a,int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        int min=a[i],ind=i;
        for(j=i+1;j<n;j++)
        {
           if(a[j]<min)
           {
            ind=j;
           }
        }
        int temp=a[i];
        a[i]=a[ind];
        a[ind]=temp;
    }
    int k;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" " ;
    }
}
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,n);
}
