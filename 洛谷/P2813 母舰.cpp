#include"iostream"
#include<algorithm>
using namespace std;

int main()
{
	long long int n,m;
	long long int a[100001],b[100001];
cin>>m>>n;
for (int i = 0; i < m; i++)
cin>>b[i];
for (int i = 0; i < n; i++)
cin>>a[i];

sort(a,a+n);
sort(b,b+m);


int t;
t=0;
for (int j = 0; j < n; j++){
if(b[t]==0)
t++;
if(b[t]<a[j]&&b[t]!=0){
a[j]=0;
t++;
}
}
if(t<m){
	cout<<"0"<<endl;
	return 0;
}

long long int sum=0;
for (int i = 0; i < n; i++)
	sum+=a[i];

cout<<sum<<endl;
	return 0;
}