#include<bits/stdc++.h> 
#define ll long long
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

ll ans=0,m;
ll n,L,R;
ll Pow(int n,int k){
    ll a=1;
    for(int i=1;i<=k;i++) a*=n;
    return a; 
}
ll devide(ll n,ll l,ll r){
    if(l>R || r<L) return 0;
    if(L<=l && r<=R) return n;
    ll m = l + (r-l)/2;
    if(L<=m && m<=R) return devide(n/2,l,m-1)+devide(n/2,m+1,r)+n%2;
    return devide(n/2,l,m-1)+devide(n/2,m+1,r);
}
void Res(){
    cin>>n>>L>>R;
    int k=0;
    ll z=n;
    while(z>1) {
        z/=2;
		k++;
    }
    z = Pow(2,k)*2-1;
    cout<<devide(n,1,z)<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
