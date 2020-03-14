#include<bits/stdc++.h>
using namespace std;
struct point{
double x,y,z;
}p[3];
double dist(point &a,point &b,double d=0){
    d+=(a.x-b.x)*(a.x-b.x);d+=(a.y-b.y)*(a.y-b.y);d+=(a.z-b.z)*(a.z-b.z);
    return d;
}
double fun(){
    int cnt=100;
    point m1,m2;
    double d1,d2,ans=10000000.0;
    while(cnt--){
 
        m1.x=(p[1].x+(2*p[0].x))/3.0;
        m1.y=(p[1].y+(2*p[0].y))/3.0;
        m1.z=(p[1].z+(2*p[0].z))/3.0;
 
        m2.x=(p[0].x+(2*p[1].x))/3.0;
        m2.y=(p[0].y+(2*p[1].y))/3.0;
        m2.z=(p[0].z+(2*p[1].z))/3.0;
 
        d1 = dist(m1,p[2]);
        d2 = dist(m2,p[2]);
 
        if(d1>d2) {
                p[0] = m1;
                ans=min(ans,d2);
        }
        else {
                p[1] = m2;
                ans=min(ans,d1);
        }
    }
 
    return sqrt(dist(m1,p[2]));
}
int main(){
    int t,cas=1;
    cin>>t;
    while(t--){
        for(int i=0;i<3;i++) cin>>p[i].x>>p[i].y>>p[i].z;cout<<"Case "<<cas++<<": "<<fixed<<setprecision(10)<<fun()<<endl;
    }
 
}
