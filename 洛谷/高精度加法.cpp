#include"iostream"
#include <cstring>
using namespace std;

int  main(void){
 char s1[5000],s2[5000];
 int c[50000],a[5000],b[5000];
cin>>s1>>s2;
int al,bl,cl;
al=strlen(s1);
bl=strlen(s2);
cl=max(al,bl)+1;
for (int i = 0; i < al; i++)
a[al-i]=s1[i]-'0';
for (int i = 0; i < bl; i++)
b[bl-i]=s2[i]-'0';

for (int i = 1; i <cl; i++)
{
	c[i]+=a[i]+b[i];
	c[i+1]=c[i]/10;
	c[i]=c[i]%10;
}
if (c[cl]==0&&cl>0)cl--;

for (int i = cl; i > 0; i--)
cout<<c[i];
cout<<endl;

return 0; 
}