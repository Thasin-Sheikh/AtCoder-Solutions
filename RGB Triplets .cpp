#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int cnt=0,i,j,k,n,r=0,g=0,b=0;
    string ptr;
    cin>>n>>ptr;

    for(i=0; i<ptr.length(); i++)
    {
        if(ptr[i]=='R')
            r++;
        if(ptr[i]=='G')
            g++;
        if(ptr[i]=='B')
            b++;
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(ptr[i]!=ptr[j])
            {
                if(2*j-i>=n)
                    continue;
                if(ptr[2*j-i]!=ptr[i]&&ptr[2*j-i]!=ptr[j])
                    cnt++;
            }
        }
    }
cout<<(r*g*b)-cnt<<endl;
}
