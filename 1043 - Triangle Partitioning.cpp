#include<bits/stdc++.h>
using namespace std;
 double cal_area(double a,double b,double c){
    double s=(a+b+c)/2.0;
    return sqrt((s*(s-a)*(s-b)*(s-c)));
 }

int main(){
    int t,cas=1;
    cin>>t;
    while(t--){
        double ab,ac,bc,rat;
        cin>>ab>>ac>>bc>>rat;
        int cnt=100;
        double l=0.0,h=ab,mid,ae,de,area,r,total_area;
        total_area=cal_area(ab,ac,bc);
        while(cnt--){
            mid=(l+h)/2.0;
            ae=(mid*ac)/ab;
            de=(mid*bc)/ab;
            area=cal_area(mid,ae,de);
            r=area/(total_area-area);
            if(r>rat) h=mid;
            else l=mid;
        }
        cout<<"Case "<<cas++<<": "<<fixed<<setprecision(10)<<mid<<endl;
    }
}
