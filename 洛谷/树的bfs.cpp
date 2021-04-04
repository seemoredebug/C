#include"iostream"
#include"cmath"
#include"queue"
#include<stdio.h>
using namespace std;
int main(void){
	int n;
	int m;
	int deep=1;
	int deepmin=0;
	int sum=0;
	cin>>n;
	for(int j=0;j<n;){//全部数据的for读取
	int temp=0;
	int z=deep-1;
       for (int i = 0; i < pow(2,z); i++)//每层的数的读取
	   {
		   int t;
           cin>>t;
		   temp+=t;
	   }
	   if (sum<temp)
	   {
		   deepmin=deep;
		   sum=temp;
	   }
	   temp=0;
	   deep++;
	   j+=pow(2,z);
	}
	cout<<deepmin<<endl;
}