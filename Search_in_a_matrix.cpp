#include<iostream>
using namespace std;
int main()
{
    int r,c,i,j,n;
    cin>>r>>c;
    int mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>mat[i][j];
        }
    }
    int flag=0;
    cin>>n;
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(n==mat[i][j])
            {
            flag=1;
            cout<<1;
            break;
            }
        }
    }
    if(flag==0)
    {
        cout<<0;
    }
}