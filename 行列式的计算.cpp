#include<stdio.h>
int main(){
	int n;
	float r;
	float sum=1.0;
	printf("请输入行列式的阶数：");
	scanf("%d",&n);
	float arr[n][n];
	for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				printf("请输入元素a%d%d:",i+1,j+1);
				scanf("%f",&arr[i][j]);
			}
	}
	for(int k=0;k<n-1;k++){
		for(int i=k+1;i<n;i++){
			r=arr[i][k]/arr[k][k];
			for(int j=k;j<n;j++){
				arr[i][j]-=r*arr[k][j];
			}
		}
	}
	for(int q=0;q<n;q++){
		sum*=arr[q][q];
	}
	printf("答案为%f。\n",sum);
	return 0;
}
