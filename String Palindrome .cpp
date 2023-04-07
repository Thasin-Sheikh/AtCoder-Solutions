#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,n,t,m,array[100000+10],ans=0,sum1=0,sum2=0,sum3=0,sum=0,cnt=0,cnt1=0,cnt2=0,cnt3=0,flag=0,flag1=0,flag2=0;
    long long int minirow=INT_MAX,minicol=INT_MAX,maxrow=INT_MIN,maxcol=INT_MIN;
    int i,j;
    string s[100],p;
    char ch;
    cin>>p;
    int len=p.length();
    int len1=(len-1)/2;
    int len2=(len+3)/2;
    //cout<<len<<endl;
    len=len-1;
    d=len;
    len1=len1-1;
    len2=len2-1;
    //cout<<len2<<endl;
    a=0;
    while(len>a)
    {
        //cout<<p[a]<<endl;
        if(p[a++]!=p[len--])
        {
            flag=1;
            break;
        }
    }
    int l=0;
    while(len1>l)
    {
        //cout<<p[a]<<endl;
        if(p[l++]!=p[len1--])
        {
            flag1=1;
            break;
        }
    }
    while(len>len2)
    {
        //cout<<p[a]<<endl;
        if(p[len2++]!=p[len--])
        {
            flag2=1;
            break;
        }
    }
    if(flag==0&&flag1==0&&flag2==0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
