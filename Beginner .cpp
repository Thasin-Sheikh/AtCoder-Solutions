#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ir,dr,ans=0;
    cin>>n>>dr;
    if(n>=10)
        ir=dr;
    else
        ir=dr+(100*(10-n));
    cout<<ir<<endl;

}
