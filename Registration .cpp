#include<bits/stdc++.h>
using namespace std;
vector<int>primes;
#define MAX 35000
using ll=long long ;
ll flag=0;
ll ar[100];

int main()
{
    ll n,i,sum=0,l,t=1;
    string str,ptr;
    cin>>str>>ptr;
    if(str.length()>=ptr.length())
    {
        cout<<"No"<<endl;
        return 0;
    }
    else if((str.length()+1)<ptr.length())
    {
        cout<<"No"<<endl;
        return 0;
    }
    for(i=0;i<ptr.length()-1;i++)
    {
        if(str[i]!=ptr[i])
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
  cout<<"Yes"<<endl;
}

