#include<bits/stdc++.h> 
#define ll long long 
#define For(i,a,b) for(int i=a;i<=b;i++)

using namespace std;

ll convert_to_10(string s){
    ll a=0;
    int n = s.length();
    for(int i=n-1;i>=0;i--){
        a+=(s[i]-'0')*pow(2,n-1-i);
    }
    return a;
}

void Res(){
    string a,b;
    cin>>a>>b;
    ll ans = convert_to_10(a)*convert_to_10(b);
    cout<<ans<<'\n';
}
int main(){
    int test = 1;
    cin>>test;
    while(test--){
        Res();
    }
}
