#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,sum1=0,cnt=0,ar[100000];
    float flag,sum=0,m;
    vector<long long int>vec;
    list<long long int>mylist;
    vector<long long int>::iterator it1;
    list<long long int>::iterator it2;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum=sum+ar[i];
    }
    //cout<<sum<<endl;
    flag=sum *(1/(4*m));
    //cout<<flag<<endl;
    for(i=0;i<n;i++)
    {

        if(ar[i]>=flag)
           cnt++;
    }
    if(cnt>=m)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}

