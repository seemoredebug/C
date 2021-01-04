#include"iostream"

using namespace std;

int  main(void){
	int x,y,p,a,sum=1;
	cin>>x>>y;
	if(y%x!=0)
	cout<<0<<endl;
	else{
		p=y/x;
		a=2;
		while (p!=1)
		{
			while(p%a!=0)
			a++;
			while(p%a==0)
			p/=a;
			a++;
			sum*=2;
		}
		cout<<sum<<endl;

	}
return 0; 
}