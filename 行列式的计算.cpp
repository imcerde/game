#include<stdio.h>
int main(){
	int n;
	float r;
	float sum=1.0;
	int a=0;
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
			if(arr[k][k]==0){
				for(int m=k+1;m<n;n++){
					if(arr[m][k]!=0){
						for(int b=0;b<n;b++){
							a=arr[m][b];
							arr[m][b]=arr[k][b];
							arr[k][b]=a;
						}
						a++;
						break;
					}
					else{
						goto Label_1; 
					}
				}
			} 
			else{
				r=arr[i][k]/arr[k][k];
				for(int j=k;j<n;j++){
					arr[i][j]-=r*arr[k][j];
				}
			}
		}
	}
	Label_1:for(int q=0;q<n;q++){
		sum*=arr[q][q];
	}
	for(int i=0;i<a;i++){
		sum*=-1; 
	}
	printf("答案为%f。\n",sum);
	return 0;
}
