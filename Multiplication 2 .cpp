#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;
ll flag=0;
#define mod 1000000000000000000
ll ar[100];
ll aarray[100000+10];
int main()
{
    ll n,i,sum=0,l,t=1,zero=0;
    string str,ptr;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>aarray[i];
        if(aarray[i]==0)
            zero++;

    }
    if(zero>0)
    {
        cout<<0<<endl;
        return 0;
    }
    for(i=0;i<n;i++)
    {
        if(aarray[i]<=mod/t)
        t*=aarray[i];
        else
        {
            cout<<-1<<endl;
            return 0;
        }

    }
    cout<<t<<endl;

}
