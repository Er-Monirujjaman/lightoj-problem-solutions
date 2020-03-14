#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,b;
    cin>>n;
    if(n<=25)
    {
        for(int i=1; i<=n; i++)
        {
            cin>>t;
            if(t>10)
            {
                b=t-10;
                a=t-b;
            }
            else
            {
                b=t;
                a=0;
            }
            cout<<a<<" "<<b<<endl;
        }
    }

    return 0;
}
