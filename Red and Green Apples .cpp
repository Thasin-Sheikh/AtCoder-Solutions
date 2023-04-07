#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,k,l,sum=0,sum1=0,ans=0,flag=0,red,green,x,y,a,b,colr,ct=0,ct1=0,ct2=0,cnt=0;
    string s;
    char ch;
    cin>>x>>y>>red>>green>>colr;
    long long int r[red+100],g[green+100],c[colr+100];
    vector<long long int>v;
    for(i=0; i<red; i++)
    {
        cin>>r[i];
    }
    for(i=0; i<green; i++)
    {
        cin>>g[i];
    }

    sort(r,r+red);
    sort(g,g+green);
    for(i=red-1; i>=0; i--)
    {
        ct++;
        v.push_back(r[i]);
        if(ct==x)
            break;
    }
    for(i=green-1; i>=0; i--)
    {
        ct2++;
        v.push_back(g[i]);
        if(ct2==y)
            break;
    }
    for(i=0; i<colr; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(i=v.size()-1;i>=0;i--)
    {
        cnt++;
        sum=sum+v[i];
        if(cnt==x+y)
            break;
    }

cout<<sum<<endl;
}
