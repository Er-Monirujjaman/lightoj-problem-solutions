#include<bits/stdc++.h>
using namespace std;
 
typedef long long int ll;
#define mod 10000007
 
ll a[10000];
 
int main() {
    int n, caseno = 0, cases;
    cin>>cases;
    while( cases-- ) {
            cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>n;
        for(int i=6;i<=n;i++){
            a[i]=(a[i-1]+a[i-2]+a[i-3]+a[i-4]+a[i-5]+a[i-6])%mod;
        }
        cout<<"Case "<<++caseno<<": "<<a[n]%mod<<endl;
    }
    return 0;
}
