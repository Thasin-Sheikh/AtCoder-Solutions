#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,k,blue,red,fuel,cap,d,y,b,r,price,sum=0,t,i,j,ans=0,dif,array[100000+10],f,p,minx=INT_MAX,maxx=INT_MIN,a,c,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    string str,ptr;
    char ch;
    cin>>k;
    cin>>a>>b;
    for(i=a;i<=b;i++)
    {
        if(i%k==0)
        {
            cout<<"OK"<<endl;
            return 0;
        }
    }
    cout<<"NG"<<endl;




    return 0;


}
