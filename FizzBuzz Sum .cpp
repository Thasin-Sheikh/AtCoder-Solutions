#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,po,no,flag,cnt=0,cnt2,ans,ar[100000],x,y,i,co[100000],sum=0;
    string str[1000],ptr,sr,tr,rtr,rt;
    vector<long long int>v(100000,0);
    set<string>s;
    queue<long long int>qu;
    set<string>::iterator it;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%3!=0&&i%5!=0)
            sum=sum+i;
    }

cout<<sum<<endl;


}

