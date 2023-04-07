#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    long long int a,b,c,d,n,m,array[100000+10],ans=0,sum1=0,sum2=0,sum3=0,sum=0,cnt=0,cnt1=0,cnt2=0,cnt3=0,flag,flag1,flag2;
    int i,j;
    string s[1000],p[1000];
    char ch;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        s[i]=m+'0';
    }
    for(i=0; i<m; i++)
    {
        p[i]=n+'0';
    }
    if( lexicographical_compare(s, s+n, p, p+m))
    {
        flag=1;
    }
    else
    {
        flag=0;

    }
    if(flag==1)
    {
        for(i=0; i<n; i++)
            cout<<s[i];
    }
    else
    {
        for(i=0; i<m; i++)
            cout<<p[i];
    }


}
