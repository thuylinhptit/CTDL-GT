#include<bits/stdc++.h>
using namespace std;
int n;
void Handle(){
	int a[n+5][n+5];
	for( int j=1;j<=n ;j++){
		cin>>a[1][j];
	}
	int cot=n-1;
	for( int i=2; i<=n; i++ ){
		for( int j=1; j<=n ;j++ ){
			a[i][j]=a[i-1][j]+a[i-1][j+1];
		}
		cot--;
	}
	cot=n;
	for( int i=1; i<=n ;i++ ){
		cout<<"[ ";
		for( int j=1; j<cot ;j++){
			cout<<a[i][j]<<' ';
		}
		cout<<a[i][cot]<<' '<<']';
		cot--;
		cout<<endl;
	}
	
	
}
int main ()
{
	int t;
	cin>>t;
	while ( t-- ){
		cin>>n;
		Handle();
	}
}
