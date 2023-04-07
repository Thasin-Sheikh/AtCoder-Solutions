#include<bits/stdc++.h>
using namespace std;
int ans[1000];
int main()
{
    int ara[100][100];
    int a,b,i,j,sum,n,p;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=3; j++)
        {
            cin>>ara[i][j];
        }
    }
    cin>>n;
    for(p=1; p<=n; p++)
    {
        cin>>a;
        for(i=1; i<=3; i++)
        {
            for(j=1; j<=3; j++)
            {
                if(ara[i][j]==a)
                {
                    ara[i][j]=1;
                }
            }
            /*for(i=1;i<=3;i++)
            {
                for(j=1;j<=3;j++)
                {
                    cout<<ara[i][j];
                }
            }*/
        }
    }
    if(ara[1][1]==1&&ara[1][2]==1&&ara[1][3]==1||ara[2][1]==1&&ara[2][2]==1&&ara[2][3]==1||ara[3][1]==1&&ara[3][2]==1&&ara[3][3]==1||ara[1][1]==1&&ara[2][1]==1&&ara[3][1]==1||ara[1][2]==1&&ara[2][2]==1&&ara[3][2]==1||ara[1][3]==1&&ara[2][3]==1&&ara[3][3]==1||ara[1][1]==1&&ara[2][2]==1&&ara[3][3]==1
            ||ara[1][3]==1&&ara[2][2]==1&&ara[3][1]==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
