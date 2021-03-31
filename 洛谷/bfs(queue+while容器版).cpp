#include"iostream"
#include"cmath"
#include"queue"
#include<stdio.h>
using namespace std;
int n=30,m=50;
struct  coor
{
	int x,y;
};//坐标

struct POS//pos偏移值
{
	int x,y;
}pos[4]={{1,0},{0,-1},{0,1},{-1,0}};

int par[55][55];//路径数组储存路径用于打印
bool vis[55][55];//判断路障的标记数组

char dir[4]={'D','L','R','U'};//方向数组用于打印

void dfs(int x,int y){//打印函数从终点回溯
	if(x==0 && y==0) 
	return;//到达起点开始回溯
	dfs(x-pos[par[x][y]].x,y-pos[par[x][y]].y);//通过路径数组回溯
	printf("%c", dir[par[x][y]]);
}


void bfs(){
     coor temp;//中间坐标变量方便预览下一步
	 queue<coor> q;//创建容器双头可读取后方push的栈
	 q.push({0,0});//起点
	 vis[0][0]=true;//起点标记路障
	 while(!q.empty()){
		 coor p=q.front();//现在坐标
		 q.pop();//弹出
		 if(p.x==n&&p.y==m)//判断终点
		 return;
		 for (int i = 0; i < 4; i++)//4个方向的以此入栈
		 {  
			temp.x=p.x+pos[i].x;//现在坐标加偏移值
			temp.y=p.y+pos[i].y;
			if(temp.x<0||temp.x>=n||temp.y<0||temp.y>=m||vis[temp.x][temp.y])
			    continue;//判断下一步的可行性不可行就下一个方向
			 vis[temp.x][temp.y]=true;//可行此处标记路障
			 q.push(temp);//入栈
			 par[temp.x][temp.y]=i;//打印数组记录路径
		 }
		 
	 }

	  

}

int main(void){
 int x;
 for (int  i = 0; i < n; i++)
 {
	 for (int  j = 0; j < m; j++)
	 {
		 x=getchar()-'0';//读入数据
		 if(x==1)//判断是不是障碍
		 vis[i][j]=true;//路障标记数组标记
	 }
	 getchar();//回车清理
 }
  bfs();
  dfs(n-1,m-1);
}
