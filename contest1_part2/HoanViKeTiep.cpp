#include<iostream>
using namespace std;
int n,stop,a[100000];
void sinh()
{
 int i=n-1;
 while(i>0&&a[i]>a[i+1])
i--;
 if(i==0) stop=1;
 else if( i > 0)
 {
 int k=n;
 while(a[i]>a[k])
k--;
 swap(a[k],a[i]);
 int c=n,r=i+1;
 while(r<=c)
 {
 swap(a[c],a[r]);
 r++;c--;
 }
 }
}
void in()
{
 for(int i=1;i<=n;i++)
 cout<<a[i]<<' ';
 cout<<endl;
}
void hoanvi()
{
 sinh();
 if( stop==0 ) in();
 else{
 	for( int i=1; i<=n; i++) cout<<i<<' ';
 }
}
int main()
{
 int test;
 cin>>test;
 while( test-- ){
 	cin>>n;
 	for( int i=1; i<=n ;i++ ){
 		cin>>a[i];
 	}
 	hoanvi();
 }
}
