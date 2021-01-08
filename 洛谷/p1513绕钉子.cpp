#include"iostream"
#include"cmath"
#include<stdio.h>

using namespace std;
const double PI=3.1415926535897932384626433;
int main(void) {
	double a[100],r,b[100];
	int n;
	cin>>n>>r;
	double sum=0;
	double x1,x2,y1,y2;
	 scanf("%lf%lf",&a[1],&b[1]);
    for(int i=2;i<=n;i++)
    {
        scanf("%lf%lf",&a[i],&b[i]);
        sum+=1.0*sqrt((a[i]-a[i-1])*(a[i]-a[i-1])+(b[i]-b[i-1])*(b[i]-b[i-1]));
    }
    sum+=1.0*sqrt((a[n]-a[1])*(a[n]-a[1])+(b[n]-b[1])*(b[n]-b[1]));
	sum+=2*r*PI;
	printf("%0.2lf",sum);
	return 0;
}