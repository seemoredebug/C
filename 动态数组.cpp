#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main(){
	int num1,num2;
	cout<<"请输入动态二维数组的第一个维度：";
	cin>>num1;
	cout<<"请输入动态二维数组的第二个维度：";
	cin>>num2;
	int **array = (int **)calloc(num1,sizeof(int));
	for(int i=0;i<num1;i++) {
		array[i] = (int*)calloc(num2,sizeof(int));
	}
	for(int i=0;i<num1;i++){
		for(int j=0;j<num2;j++){
			array[i][j] =i*num2+j+1;
			printf("%d\t",array[i][j]);
		}
		cout<<endl;
	}
	for(int i=0;i<num1;i++)	
                              free(array[i]);
	free(array);
	return 0;
