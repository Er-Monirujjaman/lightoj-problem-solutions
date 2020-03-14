#include<bits/stdc++.h>
using namespace std;
struct mark{
    double got,total;
}m[20001];
double Mid;
bool comp(mark &a,mark &b){
    //return (a.total - a.got) <= (b.total - b.got);
    return (a.got-Mid*a.total) > (b.got-Mid*b.total);
}
double fun(double mid,int n,int d){
    Mid=mid/100.0;
    sort(m,m+n,comp);
    double Got=0,Total=0;
    for(int i=0;i<d;i++){
        Got+=m[i].got;
        Total+=m[i].total;
    }
    return (Got/Total)*100;
}
int main(){
 
    int t,cas=1;
    cin>>t;
    while(t--){
            int n,d;
            cin>>n>>d;
            d = n-d;
            for(int i=0;i<n;i++) cin>>m[i].got>>m[i].total;
            int cnt=30;
            double l=0,r=100,mid,ans=0;
            while(cnt--){
                mid =(r+l)/2.0;
                double race = fun(mid,n,d);
                if(race >= mid){
                    l = mid;
                    ans=max(ans,mid);
                }
                else {
                    r = mid;
                }
            }
            cout<<"Case "<<cas++<<": "<<fixed<<setprecision(10)<<ans<<endl;
    }
 
 
}
