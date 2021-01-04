#include"iostream"
#include"cstdio"
using namespace std;

int main(void){
int lo,n,maxtime=0,mintime=0,p;
cin>>lo;
cin>>n;
for (int i = 0; i < n; i++)
{
	cin>>p;
	maxtime=max(maxtime,max(1-p+lo,p));
	mintime=max(mintime,min(1-p+lo,p));
}
cout<<mintime<<" "<<maxtime<<endl;

	return 0;
}