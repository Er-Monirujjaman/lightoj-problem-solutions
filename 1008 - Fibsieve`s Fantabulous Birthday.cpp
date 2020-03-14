#include<bits/stdc++.h>
using namespace  std;
typedef long long int ll;
 
int main()
{
 
    ll t,c=0;
 
    cin>>t;
 
    while(t--){
        ll n,r,sqr,x,y;
 
        cin>>n;
 
        sqr=ceil(sqrt(n));
 
        r=sqr*sqr-n;
 
        if(r<sqr)
        {
            y=r+1;
 
            x=sqr;
 
        }
        else
        {
            x=2*sqr-r-1;
 
            y=sqr;
        }
 
        if(sqr & 1) swap(x,y);
 
        cout<<"Case "<<++c<<": "<<x<<" "<<y<<endl;
    }
}
