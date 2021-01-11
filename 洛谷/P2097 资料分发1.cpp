#include"iostream"
#include<vector>
using namespace std;
vector<int> a[100100];
int m,n,pd[100100],sum,f,s;

void dfs(int x){
	for (int y = 0; y < a[x].size(); y++)
	{
		if (pd[a[x][y]]==0)
		{
			pd[a[x][y]]=1;
			dfs(a[x][y]);
		}
	}
}


int main()
{
cin>>n>>m;

for (int i = 1; i <= m; i++)
{
	cin>>f>>s;
	a[f].push_back(s);
	a[s].push_back(f);
}
for (int i = 1; i <= n; i++)
{
	if (pd[i]==0)
	{
		sum++;
		pd[i]=1;
		dfs(i);
	}
	
}
cout<<sum<<endl;

	return 0;
}