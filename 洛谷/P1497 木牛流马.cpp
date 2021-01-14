#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
using std::string;


int main()
{
  long long sum=1,c;
  int n,k,h;
  cin>>n>>k>>h;
  for (int  i = 1; i <= k; i++)
  {
    sum*=(n-i+1)*(n-i+1);
  }
  for (int i = 1; i <= h; i++)
  {
    cin>>c;
		for(int j=1;j<=c;j++)
    sum/=j;
  }
  cout<<sum<<endl;

	return 0;
}
