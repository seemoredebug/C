#include"iostream"
#include <cstring>
using namespace std;

int bijiao(char*a,char*b){
int al,bl;
al=strlen(a);
bl=strlen(b);
if (al==bl)
	for (int i = al-1; i >=0; i--)
	{
		if(a[i]<b[i])
		return 1;
	}
else if(al<bl)
    return 1;  
return 0;

}



int  main(void){
 char s1[100860],s2[100860];
 int c[100860],a[100860],b[100860],h;
 int flog=0;
cin>>s1>>s2;
int al,bl,cl;
al=strlen(s1);
bl=strlen(s2);
cl=max(al,bl);
if (bijiao(s1,s2)==1)
{
	flog=1;
	char s3[100860];
	strcpy(s3,s1);
	strcpy(s1,s2);
	strcpy(s2,s3);
	h=al;
	al=bl;
	bl=h;
}

for (int i = 0; i < al; i++)
a[al-i]=s1[i]-'0';
for (int i = 0; i < bl; i++)
b[bl-i]=s2[i]-'0';
 
for (int i = 1; i <=cl; i++)
{
	if(a[i]<b[i])
	{
		a[i+1]--;
		a[i]+=10;
	}
	c[i]=a[i]-b[i]; 
}
while (c[cl]==0&&cl>1)cl--;


if (flog==1)
cout<<"-";

for (int i = cl; i > 0; i--)
cout<<c[i];
cout<<endl; 

return 0; 
}