#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,po,no,flag,cnt=0,cnt2,ans,ar[100000],x,y,i,co[100000],sum=0,k;
    string str[1000],ptr,sr,tr,rtr,rt;
    vector<long long int>v(100000,0);
    set<string>s;
    queue<long long int>qu;
    set<string>::iterator it;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            for(k=1; k<=n; k++)
            {
               sum=sum+__gcd(i,__gcd(j,k));
            }
        }

    }
    cout<<sum<<endl;

}
