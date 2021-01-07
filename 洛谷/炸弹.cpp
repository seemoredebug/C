
#include"iostream"
#include<math.h>

using namespace std;

int main(void) {
	int n,m,k,t;
	cin>>n>>m>>k>>t;
	int x,y,sum=0,s=0;
	int x1,x2,y1,y2;
	for (int i = 0; i  < k; i++)
	{
		sum=0;
 		cin>>x>>y;
		 for (int j = max(x-t,1); j <= min(x+t,n); j++)
		 for(int z=max(y-t,1);z<=min(y+t,m);z++)
		 if(sqrt((j-x)*(j-x)+(z-y)*(z-y))<=t)
		 sum++;	 
		 s=max(s,sum);
	}
	cout<<s<<endl;
	return 0;
}