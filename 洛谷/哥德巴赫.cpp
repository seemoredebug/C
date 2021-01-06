
#include"iostream"
#include<stdio.h>
#include<math.h>
using namespace std;
int sushu(int);
int panding(int);
int main(void) {
	int shuru;
	cin>>shuru;
	int su[2262];
	for(int i=1;i<shuru+1;i++)
	su[i-1]=sushu(i);
	for(int i=0;i<shuru;i++)
	for(int j=0;j<shuru;j++)
	if(panding(shuru-su[i]-su[j])==0){
		printf("%d %d %d",su[i],su[j],shuru-su[i]-su[j]);
		return 0;
	}
	return 0;
}
int sushu(int a) {
	int b, panduan = 1,sum=0,i=2;
	while(sum!=a){
		for (b = 2; b<=sqrt(i); b++)
		{
			if (i % b == 0)
			{
				i++;
				b=1;
			}
		}
		i++;
		sum++;
	}
	return --i;
}

int panding(int a){
	if(a<2)
	return 1;
	else
for (int  i = 2; i <=sqrt(a); i++)
{
	if(a%i==0)
	return 1;
}
return 0; 
}