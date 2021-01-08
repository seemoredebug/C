#include"iostream"
#include"cmath"
#include<stdio.h>

using namespace std;
const double PI=3.1415926535;
int main(void) {
	int a[1000],b[1000];
	int n;
	cin>>n;
	int sum=0,mi;
	for (int i = 0; i < n; i++)
		cin>>a[i]>>b[i];
    for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(i==j)
		continue;
		else
        sum=max(sum,abs((a[i]-a[j]))*abs((a[i]-a[j]))+abs((b[i]-b[j]))*abs((b[i]-b[j])));		
	}
	if(i==0)
	mi=sum;
	else
	{
		mi=min(mi,sum);
	}
	sum=0;
	}
	printf("%.4lf",(double)mi*PI);
	return 0;
}