#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

void Res(){
    int n,m,pos;
    cin>>n>>m>>pos;
    int a[n+3],b[n+3];
    For(i,1,n) cin>>a[i];
    For(i,1,m) cin>>b[i];
    sort(a+1,a+n+1);
    sort(b+1,b+m+1);
    vector<int> f(n+m+3);
    int i=1,j=1,k=1;
    while(i<=n&&j<=m){
        f[k++] = (a[i]>=b[j]) ? b[j++]:a[i++];
    }
    while(i<=n) f[k++]=a[i++];
    while(j<=m) f[k++]=b[j++]; 
    cout<<f[pos];
    cout<<'\n';
}
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}

