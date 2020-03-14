#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1.0)
int main()
{
    int t,cas=1;
    cin>>t;
    double R,r,n;
    while(t--)
    {
        cin>>R>>n;
        r = sin(pi/n);
        cout<<"Case "<<cas++<<": "<<fixed<<setprecision(10)<<(r*R/(r+1))<<endl;
    }
    return 0;
}
