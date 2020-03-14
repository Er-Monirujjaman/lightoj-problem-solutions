#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll t,cas=1,n,w,a[35];
vector<ll>v1,v2;
void sub1(ll low,ll high,ll sum){
 
    if(sum>w) return;
 
    if(low == high){
        if(sum<=w){
            v1.push_back(sum);
            return;
        }
    }
 
    sub1(low+1,high,a[low]+sum);
    sub1(low+1,high,sum);
}
 
void sub2(ll low,ll high,ll sum){
 
    if(sum>w) return;
 
    if(low == high){
        if(sum<=w){
            v2.push_back(sum);
            return;
        }
    }
 
    sub2(low+1,high,a[low]+sum);
    sub2(low+1,high,sum);
}
 
 
int main(){
 
    cin>>t;
 
    while(t--){
        cin>>n>>w;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        v1.clear();
        v2.clear();
 
        sub1(0,n/2,0);
        sub2(n/2,n,0);
 
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
 
        int sz=v1.size();
        ll ans=0;
        for(int i=0;i<sz;i++){
            if(w-v1[i]>=0){
               ans+=upper_bound(v2.begin(),v2.end(),w-v1[i])-v2.begin();
            }
        }
 
        cout<<"Case "<<cas++<<": "<<ans<<endl;
    }
}
