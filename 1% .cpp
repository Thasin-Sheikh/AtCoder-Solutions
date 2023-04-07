#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,yellow,blue,red,x,fuel,cap,d,y,b,r,price,sum=0,t,i,j,ans=0,dif,array[100000+10],f,p,minn,a,c,flag;
    char pixel [110][110];
    vector<long long int>v,vec;
    bool prime[1000007];
    string str,ptr;
    char ch;
    cin>>n;
    x=100;
    while(1)
    {
      x=x+(x*1)/100;
      sum++;
      if(x>=n)
      {
          break;
      }
    }
  cout<<sum<<endl;


    return 0;


}
