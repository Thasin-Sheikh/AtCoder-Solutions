#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,x;
    cin>>a>>b>>c;
    x=a+b+2*sqrtl(a*b);
    if(x<c)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
