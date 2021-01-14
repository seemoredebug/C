#include"iostream"

using namespace std;


int main()
{
  int n,sum;
  cin>>n;
  int p[10]={6,2,5,5,4,5,6,3,7,6},a[2001]={6},j;
  for (int i = 1; i <= 2000; i++)
  {
     j=i;
                while(j>=1)
                {
                        a[i]=a[i]+p[j%10];
                        j=j/10;
                }
  }
  
  for (int i = 0; i <=1000; i++)
  {
    for (int j = 0; j <= 1000; j++)
    {
     if(a[i]+a[j]+a[i+j]+4==n)
          sum++;
    }
    
  }
  cout<<sum<<endl;
	return 0;
}
