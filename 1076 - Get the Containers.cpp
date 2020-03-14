#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,n,m,c,cas=1,v[1001];
 
ll check(ll capacity){
    ll cnt=1,prd=0;
    for(int i=0;i<n;i++){
        if(prd+v[i]>capacity){cnt++;prd=v[i];}
        else prd+=v[i];
    }
    return cnt;
}
 
int main(){
 
 
    cin>>t;
 
    while(t--){
        ll l=0,h,mid,sum=0;
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>v[i];
            l=max(l,v[i]);
            h+=v[i];
        }
 
        while(l<=h){
            mid=(l+h)>>1;
            if(check(mid)<=m) h=mid-1;
            else l=mid+1;
        }
        cout<<"Case "<<cas++<<": "<<l<<endl;
    }
}
