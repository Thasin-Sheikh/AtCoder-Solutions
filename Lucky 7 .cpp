#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int j,n,m,po,no,flag=0,cnt,cnt2,ans=0,ar[100000],x,y,i,co[100000];
    string str,ptr,sr,tr,rtr,rt;
    vector<long long int>v(100000,0);
    set<string>s;
    queue<long long int>qu;
    set<string>::iterator it;
    cin>>str;
    for(i=0;i<str.length();i++)
    {
        if(str[i]=='7')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;




}
