#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
const ll lim=1e12;
vector<ll>v;
vector<ll>lucky;


void fun(ll n){
    if(n>lim) return;
    if(n!=0) v.push_back(n);
    fun(n*10+4);
    fun(n*10+7);
}

void num(int l,ll h,int size){
 
    if(l>=size) return;
    for(int i=l;i<size;i++){
        ll t=h*v[i];
        if(t>=lim || t<=0) return;
        lucky.push_back(t);
        num(i,t,size);
    }
}
 
int main(){
 
    fun(0);
    sort(v.begin(),v.end());
    int s=v.size();
 
    num(0,1,s);
 
    sort(lucky.begin(),lucky.end());
    lucky.erase(unique( lucky.begin() , lucky.end() ) , lucky.end() );
 
    int t,cas=1;
    ll a,b;
 
    cin>>t;
 
    while(t--){
        cin>>a>>b;
 
        int l=lower_bound(lucky.begin(),lucky.end(),a)-lucky.begin();
        int r=upper_bound(lucky.begin(),lucky.end(),b)-lucky.begin();
 
        cout<<"Case "<<cas++<<": "<<r-l<<endl;
    }
 
}
