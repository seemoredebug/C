#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
using namespace std;
using std::string;


int main()
{
  string a;
  int i=0,sum=0,n=0;
  string w;
  cin>>a;
  getchar();
  transform(a.begin(),a.end(),a.begin(),::tolower);
  getline(cin,w);
    w=" "+w+" ";
    a=" "+a+" ";
    transform(w.begin(),w.end(),w.begin(),::tolower);
    
    while (w.find(a,n)!=-1)
    {
      sum++;
      n=w.find(a,n)+1;
    }
    
  if (sum==0)
  {
    cout<<"-1"<<endl;
  }
  else
  cout<<sum<<" "<<w.find(a)<<endl;
  
	return 0;
}
