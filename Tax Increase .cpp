#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,ans,sum=0,i;
    cin>>a>>b;
    bool f=false;
    for(i=1; i<=10000; i++)
    {

        if(i*8/100==a&&i*10/100==b)
        {
            cout<<i<<endl;
            f=true;
            break;
        }
    }
    if(f==false)
        cout<<-1<<endl;
    return 0;
}
