
#include"iostream"
#include"string"

using namespace std;

int main(void) {
	string mu[1000][100];
int n,m;
cin>>n>>m;
for (int i = 0; i < m; i++)
for(int j=0;j<n;j++)
cin>>mu[i][j];

string k;
int flog=1;
for (int i = 0; i < n; i++){
	k=mu[0][i];
	flog=1;
for(int j=0;j<m;j++)
if(mu[j][i]!=k){
	flog=0;
    break;
}
if(flog==0)
cout<<"*";
else
cout<<k;
if(i!=m-1)
cout<<" ";
}
	return 0;
}