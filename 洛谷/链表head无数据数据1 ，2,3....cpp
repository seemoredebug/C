#include"iostream"

using namespace std;
void sanchu(int k,lis* head);

 typedef struct lis{
	int a;
	lis *next;
}lis;



int main()
{
	int m,n;
    cin>>n>>m;
	lis *p,*q;
	lis *head;
	head=(lis *)malloc(sizeof(lis));
	for (int i = 1; i <=n; i++)
	{
	p=(lis*)malloc(sizeof(lis));
	p->a=i;
	if(i==1)
	q=head;
	q->next=p;
	q=p;
	}
	
	int s=1,t;
	for (int i = 1; i <= m; i++)
	{
		t=i*i*i%5+1;
		s+=t;
		if(s>m)
		s=t;
	}
	
	return 0;
}

void sanchu(int k,lis* head){
		lis *p,*q;
		q=head;
	for (int  i = 1; i < k; i++)
	{
	
		p=q->next;
		q=p->next;
	}
	p->next=q->next;

}